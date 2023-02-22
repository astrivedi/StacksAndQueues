#include<iostream>
#include "BST.hpp"
using namespace std;

int main() {
    int A[] = {22,33,11,66,5};
    BST T;

    for (int i = 0; i < 5; i++) {
        cout << "inserting " << A[i] << endl;
        getchar();
        T.add(A[i]);
        T.print();
    }    
    T.print();

    return 0;
}