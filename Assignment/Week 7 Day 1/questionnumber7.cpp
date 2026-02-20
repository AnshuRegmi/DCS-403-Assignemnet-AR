/*
Circular Queue - Creation
This program implements a circular queue using an array. Unlike linear queue,
circular queue uses modulo operator to wrap around indices, allowing efficient
use of space. When rear reaches the end, it wraps to the beginning if space is
available. This eliminates the limitation of linear queues where space cannot be reused.
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
            cout << "Queue is full!" << endl;
            return;
        }
        if (front == -1) front = 0;
        rear = (rear + 1) % SIZE;
        arr[rear] = value;
        cout << "Enqueued: " << value << endl;
    }
    
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return;
        }
        cout << "Dequeued: " << arr[front] << endl;
        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % SIZE;
        }
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
    cq.display();
    cq.dequeue();
    cq.enqueue(40);
    cq.display();
    return 0;
}
