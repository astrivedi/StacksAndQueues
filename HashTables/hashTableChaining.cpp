#include<iostream>
#include<string>
#include<fstream>
#include<sstream>

#include "hashTable.hpp"

#include <math.h>       /* modf */

using namespace std;

HashTable::HashTable() {
  
}
  
HashTable::HashTable(int s) {

}

HashTable::~HashTable() {

}

void HashTable::insert(string key, string value) {

}

HashNode* HashTable::search(string key) {
    return nullptr;
}

void HashTable::remove(string key) {
    return;
}

  
int HashTable::hashCode(string k, int table_size) {
    int hash = 0;

    for (int i = 0; i< k.length();  i++) 
      hash = hash + k[i];
    
    return hash % table_size;
  }

  /******************************************************************************
   *
   *  1. Given a key k (k is a string), generate the sum of the ASCII values
   *      for the characters in k.
   *  2. Multiply k by a constant A, where 0 < A < 1.
   *  3. Store the fractional part of kA.
   *  4. Multiply fractional part of kA by a constant, m, and take the floor of the result. 
   *
   *********************************************************************************/

  int HashTable::hashCode2(string k, int table_size) {
    int hash = 0;
    double A = 13.0/32.0;
    double hA;
    int m = 1024;
    
    for (int i = 0; i< k.length();  i++) 
      hash = hash + k[i];
    
    hA = hash * A;

    double fractpart, intpart;
    //get the fractional part of hash 
    fractpart = modf (hA , &intpart);

    fractpart = fractpart*m;
    hash = floor(fractpart);
    return hash % table_size;
  }


void HashTable::printHashTable() {
    for (int i = 0; i < size; i++) {
      if (table[i] != 0) {
	    cout << "[" << i << "] ";
	    HashNode* curr = table[i];
	    while (curr != 0) {
	    cout << "-> Key: " << curr->key << " (#" << hashCode(curr->key, size)<< ") Value: " << curr->value; 	  
	    curr = curr->next;
	    }
	    cout << endl;
      }
      else cout << "[" << i << "] -> Empty" << endl;
    }
}