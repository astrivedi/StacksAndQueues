#ifndef __MIN_HEAP__
#define __MIN_HEAP__

class MinHeap {
private:
    int *heap;
    int capacity;
    int currentSize;

public:
    MinHeap();
    MinHeap(int s);
    ~MinHeap();
    void push(int value);
    int pop();
    int peek();
    void printHeap();

private:
    void minHeapify(int index);
    void print2DUtil(int root, int space);

    int parent(int index) { return (index - 1) / 2; }
    int leftChild(int index) { return 2 * index + 1; }
    int rightChild(int index) { return 2 * index + 2; }
    void swap(int &x, int &y){
        int z = x;
        x = y;
        y = z;
    }
};

#endif // __MIN_HEAP__
