#include<iostream>
#include "arrayStack.hpp"
using namespace std;

int main() {
  ArrayStack S;
  bool flag = true;
  
  while (flag) {
    cout << "--------------------------------------------------\n";
    cout << " 1. PUSH    2. POP   3. EXIT \n";
    cout << "--------------------------------------------------\n";
    cout << "RES:> ";
    
    string response;
    cin >> response;
    int choice = stoi(response);
    
    switch (choice) {

    case 1:
      {
	      string elem;
	      cout << "Enter the number you wish to push: ";
	      cin >> elem;
	      cout << endl;
	      S.push(stoi(elem));
	      S.prettyPrint();	
	      break;
      }
      
    case 2:
      {
	      int ret = S.pop();
	      cout << "The number popped is: " << ret << endl; 
	      S.prettyPrint();
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
