#pragma once
#include<iostream>
using namespace std;

struct Node {
    int key;
    Node *left;
    Node *right;

    Node() {left = nullptr; right = nullptr;}
    Node(int k) {left = nullptr; right = nullptr; key = k;}
};

class BST {
    private:
        Node *root;

    public:
        BST();
        ~BST();
        void add(int k);  // keep unique 
        Node* find(int k); // pointer to the node
       
        void print();
        Node* findMin(Node *node);

        void remove(Node* d_node); // remove the node pointed by d_node from the BST

    private:
        Node* find_prev(Node* d_node);
        void _print(Node* T, int space);
        
};