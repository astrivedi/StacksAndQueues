#include<iostream>
#include "BST.hpp"

using namespace std;

int main() {
    BST T;
    int A[] = {22, 33, 44, 55, 11, 4, 8, 9, 13, 77};

    for (int i = 0; i < 10; i++) T.insert(A[i]);
    T.print();
    
    // T.inOrder();
    // T.preOrder();
    // T.postOrder();
    // int B[] = {77, 33, 22, 13, 11, 4, 8, 9, 55, 44};
    // for (int i = 0; i < 10; i++) {
    //     cout << "Removing " << B[i]<< endl;
    //     getchar();
    //     T.remove(B[i]);
    //     T.print();
    // }


    return 0;
}