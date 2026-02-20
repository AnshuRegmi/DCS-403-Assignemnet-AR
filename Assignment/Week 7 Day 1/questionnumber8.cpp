/*
Circular Queue - Enqueue Operation
This program demonstrates enqueue operation in a circular queue. Before insertion,
it checks if the queue is full using the condition (rear+1)%SIZE == front. The
modulo operator allows rear to wrap around to the beginning of the array. This
enables efficient space utilization even after multiple dequeue operations.
*/

#include <iostream>
using namespace std;

#define SIZE 5

class CircularQueue {
    int arr[SIZE];
    int front, rear;
    
public:
    CircularQueue() {
        front = -1;
        rear = -1;
    }
    
    bool isFull() {
        return (rear + 1) % SIZE == front;
    }
    
    bool isEmpty() {
        return front == -1;
    }
    
    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue is full! Cannot insert " << value << endl;
            return;
        }
        if (front == -1) front = 0;
        rear = (rear + 1) % SIZE;
        arr[rear] = value;
        cout << "Enqueued: " << value << " at position " << rear << endl;
        display();
    }
    
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return;
        }
        cout << "Queue: ";
        int i = front;
        while (true) {
            cout << arr[i] << " ";
            if (i == rear) break;
            i = (i + 1) % SIZE;
        }
        cout << endl;
    }
};

int main() {
    CircularQueue cq;
    cq.enqueue(10);
    cq.enqueue(20);
    cq.enqueue(30);
    cq.enqueue(40);
    cq.enqueue(50);
    return 0;
}
