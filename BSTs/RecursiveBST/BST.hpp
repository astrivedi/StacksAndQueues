#pragma once
#define COUNT 10

struct Node {
    int key;
    Node* left;
    Node* right;
    Node() {key = 0; left = nullptr; right = nullptr;}
    Node(int k) {key = k; left = nullptr; right = nullptr;}
};

class BST {
    private:
    Node* root;

    public:
    BST();
    ~BST();
    void print();

    void insert(int k);  // No duplicate allowed 
    void remove(int k);  
    Node* search(int k);

    void inOrder();
    void preOrder();
    void postOrder();

    private:
    // recursive helper functions 

    void _print(Node* T, int s);
    Node* _findMin(Node* T);
    void _destruct(Node* &T);

    void _insert(Node* &T, int k);
    void _remove(Node* &T, int k);
    Node* _search(Node* T, int k);

    void _inOrder(Node* T);
    void _preOrder(Node* T);
    void _postOrder(Node* T);
    
};