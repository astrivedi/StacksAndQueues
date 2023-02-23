#include<iostream>
#include "BST.hpp"
using namespace std;

int main() {
    int A[] = {22,33,11,66,5,22,133,7,6,55};
  
    BST T;

    for (int i = 0; i < 10; i++) {
        cout << "inserting " << A[i] << endl;
        T.add(A[i]);
    }    

    T.print();

    if (T.find(33)) cout << "Found 33" << endl;
    else cout << "Not Found 33" << endl;


    if (T.find(105)) cout << "Found 105" << endl;
    else cout << "Not Found 105" << endl;
    
    cout << T.findMin(T.find(7))->key << endl;

    return 0;
}