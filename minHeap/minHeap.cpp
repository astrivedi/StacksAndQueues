#include <iostream>
#include "minHeap.hpp"
using namespace std;
#include <fstream>
#define COUNT 10

MinHeap::MinHeap() {
    capacity = 10;
    currentSize = 0;
    heap = new int[capacity];
}

MinHeap::MinHeap(int s) {
    capacity = s;
    currentSize = 0;
    heap = new int[capacity];
}

MinHeap::~MinHeap() {
    delete[] heap;
}

void MinHeap::push(int value) {
    if (currentSize == capacity) {
        cout << "Heap overflow" << endl;
    }
    else {
        currentSize++;
        heap[currentSize - 1] = value;
        int i = currentSize - 1;
        while (parent(i) >= 0 && heap[i] < heap[parent(i)]) {
            swap(heap[i], heap[parent(i)]);
            i = parent(i);
        }
    }
}

int MinHeap::pop() {
    if (currentSize <= 0) {
        cout << " Heap is empty: returning garbage" << endl;
        return -1;
    }
    else {
        int result = heap[0];
        heap[0] = heap[currentSize - 1];
        currentSize = currentSize - 1;
        minHeapify(0);
        return result;
    }
}

int MinHeap::peek() {
    if (currentSize <= 0) {
        cout << " Heap is empty: returning garbage" << endl;
        return -1;
    }
    else
        return heap[0];
}

void MinHeap::printHeap() {
    cout << "=====================================================" << endl;
    print2DUtil(0, 0);
    cout << "=====================================================" << endl;
}

void MinHeap::minHeapify(int index) {
    int min = index;
    if (leftChild(index) < currentSize) {
        if (heap[min] > heap[leftChild(index)])
            min = leftChild(index);
    }
    
    if (rightChild(index) < currentSize) {
        if (heap[min] > heap[rightChild(index)])
            min = rightChild(index);
    }

    if (index == min) {
        // Already heapified
        return;
    }
    else {
        swap(heap[min], heap[index]);
        minHeapify(min);
    }
}

void MinHeap::print2DUtil(int root, int space) {
    if (root >= currentSize)
        return;

    // Increase distance between levels
    space += COUNT;

    // Process right child first
    if (rightChild(root) < currentSize)
        print2DUtil(rightChild(root), space);

    // Print current node after space
    cout << endl;
    for (int i = COUNT; i < space; i++)
        cout << " ";
    cout << heap[root] << "\n";

    // Process left child
    if (leftChild(root) < currentSize)
        print2DUtil(leftChild(root), space);
}