#include<iostream>
#include "BST.hpp"
using namespace std;
#define COUNT 10 

BST::BST() {

}

BST::~BST() {
 
}

void BST::add(int k) {
  
}  

Node* BST::find(int k) {
   
    return nullptr;
} 

void BST::remove(Node* d_node) {
  
} 

void BST::_print(Node* T, int space)
{
    // Base case 
    if (T == 0) return;
    // Increase distance between levels
    space += COUNT;
    
    // Process right child first 
    _print(T->right, space); 
    // Print current node after space                                                                                                                                               
    printf("\n");                                                                                                                                                                   
    for (int i = COUNT; i < space; i++)                                                                                                                                             
        printf(" ");                                                                                                                                                                  
     printf("%d\n", T->key);                                                                                                                                                    

    // Process left child                                                                                                                                                           
    _print(T->left, space);                                                                                                                                                    
}                                                                                                                                                                                 
                                                                                                                                                                                  
void BST::print()                                                                                                                                                           
{                                                                                                                                                                                 
  _print(root, 1);                                                                                                                                                           
} 


Node* BST::find_prev(Node* d_node) {
  
    return nullptr;
}

Node* BST::findMin(Node *node) {

    return nullptr;
}