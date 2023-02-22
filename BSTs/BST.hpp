#pragma once
#include<iostream>
using namespace std;

struct Node {
    int key;
    Node *left;
    Node *right;
};

class BST {
    private:
        Node *root;
    public:
        BST();
        ~BST();
        void add(int k);  // keep unique 
        Node* find(int k); // pointer to the node
        void remove(Node* d_node); // remove the node 
        void print();

    private:
        Node* find_prev(Node* d_node);
        Node* findMin(Node *node);
        void _print(Node* T, int space);
};