#pragma once

#define DEFAULT_SIZE 5


/*
  (deletion) head-> [1|2|3|4|5] <-tail (insertion)
*/

struct QueueNode {
  int item; 
  QueueNode* next;

  QueueNode() {item = -1; next = nullptr;}
  QueueNode(int element) {item = element; next = nullptr;}
};

class LinkedQueue {
private:
  int capacity;
  QueueNode* head;
  QueueNode* tail;
  int size;
  
public:
  LinkedQueue();  /* Constructor with capacity DEFAULT_SIZE */
  LinkedQueue(int cap); /* Constructor with capacity */
  ~LinkedQueue(); /* Destructor */

  bool isEmpty(); /* True, if queue is empty */ 
  bool isFull();  /* True, if queue is full  */
  int getSize(); /* return the size of the Queue */
  void enqueue(int element); /* Enqueue an element to the queue */
  int dequeue(); /* Dequeue an element from the queue */
  int peek(); /* Return the element at the head of the queue  */
  void prettyPrint(); /* print the queue */ 
};
