/*
Circular Queue - Dequeue Operation
This program demonstrates the dequeue operation in a circular queue. It removes
an element from the front and uses modulo operator to update the front pointer,
allowing it to wrap around. If after deletion front equals rear, the queue becomes
empty and both pointers are reset to -1.
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
    
    bool isEmpty() {
        return front == -1;
    }
    
    void enqueue(int value) {
        if ((rear + 1) % SIZE == front) {
            cout << "Queue is full!" << endl;
            return;
        }
        if (front == -1) front = 0;
        rear = (rear + 1) % SIZE;
        arr[rear] = value;
    }
    
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty! Cannot dequeue." << endl;
            return;
        }
        cout << "Dequeued: " << arr[front] << " from position " << front << endl;
        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % SIZE;
        }
        display();
    }
    
    void display() {
        if (isEmpty()) {
            cout << "Queue is now empty!" << endl;
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
    cq.display();
    cq.dequeue();
    cq.dequeue();
    cq.dequeue();
    return 0;
}
