#include<iostream>
#include<string>
#include<fstream>
#include<sstream>

#include "hashTable.hpp"

int main(int argc, char* argv[]) {

  if (argc != 2) return 0;
  
  HashTable HT(10);
  
  ifstream file(argv[1]);
  string line; 

  while(getline(file,line))
    {
      stringstream  linestream(line);
      string key;
      string value;
      
      getline(linestream, key,',');
      getline(linestream, value, '\n');

      HT.insert(key, value);
    }

  HT.printHashTable();
  
  HT.remove("Andrew Altomare");
  HT.remove("Maciej J Zagrodzki");
  HT.remove("Prathyusha Gayam");

  HT.printHashTable();


  HT.remove("Andrew Altomare");
  HT.remove("Maciej J Zagrodzki");
  HT.remove("Prathyusha Gayam");


  HT.printHashTable();
  
  // string name1= "Prathyusha Gayam";
    
  // if (HT.search(name1) == nullptr) cout << name1 << ": Key not found" << endl;
  // else cout << "Key: " << name1 << " has value:" << HT.search(name1)->value;

  // name1= "Ashutosh Trivedi";
    
  // if (HT.search(name1) == nullptr) cout << name1 << "key not found" << endl;
  // else cout << "Key: " << name1 << " has value:" << HT.search(name1)->value << endl;
      
    
  return 0;
}
