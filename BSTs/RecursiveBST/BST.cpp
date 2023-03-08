#include<iostream>
#include "BST.hpp"
using namespace std;

BST::BST() {

}

BST::~BST(){

}

void BST::_destruct(Node* &T) {

}

void BST::insert(int k) {

}

void BST::_insert(Node* &T, int k) {

}



Node* BST::search(int k) {

}

Node* BST::_search(Node* T, int k) {

}

void BST::remove(int k) {

}

void BST::_remove(Node* &T, int k) {

}
Node* BST::_findMin(Node* T) {

}


void BST::inOrder() {

}

void BST::_inOrder(Node* T) {

}


void BST::preOrder() {

}

void BST::_preOrder(Node* T) {

}

void BST::postOrder() {

}

void BST::_postOrder(Node* T) {

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
