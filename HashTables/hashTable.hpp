#ifndef __HASH_TABLE_HPP__
#define __HASH_TABLE_HPP__

#include <iostream>
using namespace std;

struct HashNode {
  string key;
  string value;
  HashNode* next;
  
  HashNode() {key = ""; value = ""; next = nullptr;}
  HashNode(string k, string v) {key = k; value = v; next = nullptr;}
  ~HashNode() {}
};

class HashTable {
  HashNode** table;
  int size;

public:
  HashTable();  
  HashTable(int s);
 ~HashTable();
  void insert(string key, string value);
  HashNode* search(string key);
  void remove(string key);
  void printHashTable();

private:
  int hashCode(string k, int table_size);
  int hashCode2(string k, int table_size);
};

#endif //__HASH_TABLE_HPP__