#pragma once

#define DEFAULT_SIZE 5

struct StackNode {
  int item; 
  StackNode* next;

  StackNode() {item = -1; next = nullptr;}
  StackNode(int element) {item = element; next = nullptr;}
};

class LinkedStack {
private:
  int capacity; /* capacity of the stack */
  StackNode* top; /* pointer to the top node of the stack */
  int size; /* number of elements in the stack */
  
public:
  LinkedStack();  /* Constructor with capacity DEFAULT_SIZE */
  LinkedStack(int cap); /* Constructor with capacity */
  ~LinkedStack(); /* Destructor */

  bool isEmpty(); /* True, if stack is empty */ 
  bool isFull();  /* True, if stack is full  */ 
  void push(int element); /* Push an element to the stack */
  int pop(); /* Pop an element from the stack */
  int peek(); /* Return the top element of the stack */
  void prettyPrint(); /* print the stack */ 
};