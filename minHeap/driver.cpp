#include<iostream>
#include "minHeap.hpp"
using namespace std;

int main() {
    // Heapsort --- add elements to a min-heap and extract
    // Complexity -- O(n log n) -- Why?

  MinHeap MH(20);

  int array[10] = {40, 11, 4, 16, 42, 18, 19, 21, 15, 9};
  int array2[10];

  cout << "input array: " << endl;
  for (int i = 0; i < 10; i++) cout << array[i] << " ";
  cout << endl;
  
  for (int i = 0; i < 10; i++) {
    MH.push(array[i]);
    MH.printHeap();
    getchar();
  }
    
  for (int i = 0; i < 10; i++) array2[i] = MH.pop(); 

  cout << "Sorted array: " << endl;
  for (int i = 0; i < 10; i++) cout << array2[i] << " ";
  cout << endl;
    
  return 0;
}
