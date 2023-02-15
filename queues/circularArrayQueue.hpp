#pragma once

#define DEFAULT_SIZE 5


/*

  [B|B|B|B|B|B|B|1|2|3|4|5|B|B|B|B|B|B] 
                 ^head   ^tail

  [12|B|B|B|B|B|B|1|2|3|4|5|6|6|8|9|10|11] 
   ^tail          ^head   

  [12|1|3|4|5|6|7|1|2|3|4|5|6|6|8|9|10|11] :Queue Full
            tail^ ^head   

  [12|1|3|4|5|6|7|1|2|3|4|5|6|6|8|9|10|11] :Queue Full
   ^head                               ^tail   


*/

class CircularArrayQueue {
private:
  int capacity;
  int* items;
  int head;
  int tail;
  
public:
  CircularArrayQueue();  /* Constructor with capacity DEFAULT_SIZE */
  CircularArrayQueue(int cap); /* Constructor with capacity */
  ~CircularArrayQueue(); /* Destructor */

  bool isEmpty(); /* True, if queue is empty */ 
  bool isFull();  /* True, if queue is full  */
  int getSize(); /* return the size of the Queue */
  void enqueue(int element); /* Enqueue an element to the queue */
  int dequeue(); /* Dequeue an element from the queue */
  int peek(); /* Return the element at the head of the queue  */
  void prettyPrint(); /* print the queue */ 
  void prettyPrintCircular(); /* print the queue as a circular array*/ 
};
