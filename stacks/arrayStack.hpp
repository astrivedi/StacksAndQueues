#pragma once

#define DEFAULT_SIZE 5

class ArrayStack {
private:
  int capacity;
  int top;
  int* items;
  
public:
  ArrayStack();  /* Constructor with capacity DEFAULT_SIZE */
  ArrayStack(int cap); /* Constructor with capacity */
  ~ArrayStack(); /* Destructor */

  bool isEmpty(); /* True, if stack is empty */ 
  bool isFull();  /* True, if stack is full  */ 
  void push(int element); /* Push an element to the stack */
  int pop(); /* Pop an element from the stack */
  int peek(); /* Return the top element of the stack */
  void prettyPrint(); /* print the stack */ 
};
