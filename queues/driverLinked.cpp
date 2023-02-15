#include<iostream>
#include "linkedQueue.hpp"
using namespace std;


int main() {
  LinkedQueue Q;
  bool flag = true;
  
  while (flag) {
    cout << "--------------------------------------------------\n";
    cout << " 1. ENQUEUE    2. DEQUEUE   3. EXIT \n";
    cout << "--------------------------------------------------\n";
    cout << "RES:> ";
    
    string response;
    cin >> response;
    int choice = stoi(response);
    
    switch (choice) {

    case 1:
      {
	      string elem;
	      cout << "Enter the number you wish to enqueue: \n";
	      cin >> elem;
	      Q.enqueue(stoi(elem));
	      Q.prettyPrint();	
	      break;
      }
      
    case 2:
      {
	      int ret = Q.dequeue();
	      cout << "The number dequeued is: " << ret << endl; 
	      Q.prettyPrint();
	      break;
      }
      
    case 3:
      {
	      cout << "Goodbye! \n";
	
	      flag = false;
	      break;
      }
    }
  }

  return 0;
}
