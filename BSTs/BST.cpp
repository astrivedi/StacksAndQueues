#include<iostream>
#include "BST.hpp"
using namespace std;
#define COUNT 10 

BST::BST() {
    root = nullptr;
}

BST::~BST() {
    // leave it for now.
}

void BST::add(int k) {
    Node *tmp = root;

    if (root == nullptr) {
        Node *nn = new Node(k);
        root = nn;
        return;
    }

    while (tmp != nullptr) {
        if (k == tmp->key) {
            cout << "Duplicate key" << endl;
            return;
        }
        else if (k < tmp->key) {
            if (tmp->left == nullptr) {
                Node *nn = new Node(k);
                tmp->left = nn;
                return;
            }
            else tmp = tmp->left;
        }
        else {
            if (tmp->right == nullptr) {
                Node *nn = new Node(k);
                tmp->right = nn;
                return;
            }
            else tmp = tmp->right;
        }
    }


}  

Node* BST::find(int k) {
    Node *tmp = root;

    while (tmp != nullptr) {
        if (tmp->key == k) return tmp;
        else if (k < tmp->key) tmp = tmp->left;
        else tmp = tmp->right;
    }

    return tmp;
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
     Node *prev = nullptr;
     Node *curr = root;

     while (curr != nullptr) {
        if (curr == d_node) {
            return prev;
        }
        else if (d_node->key < curr->key) {
            prev = curr;
            curr = curr->left;
        }
        else {
            prev = curr;
            curr = curr->right;
        }
     }

    return nullptr;
}

Node* BST::findMin(Node *node) {
    Node *tmp =node;

    while (tmp != nullptr) {
        if (tmp->left == nullptr) return tmp;
        else tmp = tmp->left;
    }

    return nullptr;
}