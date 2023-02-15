#include <iostream>
#include "circularArrayQueue.hpp"
using namespace std;

CircularArrayQueue::CircularArrayQueue() {
  
}

CircularArrayQueue::CircularArrayQueue(int cap) {
  
}

CircularArrayQueue::~CircularArrayQueue() {
  
}

bool CircularArrayQueue::isEmpty() {
  
}

bool CircularArrayQueue::isFull() {
  
}

int CircularArrayQueue::getSize() {
  
}

void CircularArrayQueue::enqueue(int element) {
  
}

int CircularArrayQueue::dequeue() {
  
}

int CircularArrayQueue::peek() {
  
}


void CircularArrayQueue::prettyPrint() {
  if (isEmpty()) {
    cout << "head->[]<-tail" << endl;;
  }
  else {  
    cout << "head->[";
    if (head <= tail) { 
      for (int i = head; i <= tail; i++) {
	cout << items[i] << " ";
      }
    }
    else {
      for (int i = head; i < capacity; i++) {
	cout << items[i] << " ";
      }
      for (int i = 0; i <= tail; i++) {
	cout << items[i] << " ";
      }
    }
    cout << "]<-tail"<<endl;
  }
}

void CircularArrayQueue::prettyPrintCircular() {
  if (isEmpty()) {
    cout << "head->[]<-tail" << endl;;
  }
  else {  
    cout << "[";
    for (int i = 0; i < capacity; i++) {
      if (head <= tail) {
	    if (i >= head && i <= tail) {
	        if ((i == head) && (i == tail)) cout << "#"<<items[i]<<"* ";
	        else if (i == head) cout << items[i] <<"* ";
	        else if (i == tail) cout << "#"<<items[i];
	        else cout << items[i] << " ";
	    }
	    else cout << "B ";
      }
      else {
	    if (i <= tail || i >= head) {
	        if ((i == head) && (i == tail)) cout << "#"<<items[i]<<"* ";
	        else if (i == head) cout << items[i] <<"* ";
	        else if (i == tail) cout << "#"<<items[i];
	        else cout << items[i] << " ";
	    }
	    else cout << "B ";
        }
    }
    cout << "]"<<endl;
  }
}
