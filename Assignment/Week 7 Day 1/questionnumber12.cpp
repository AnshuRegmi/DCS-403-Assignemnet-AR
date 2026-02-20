/*
Circular Queue - Check Full/Empty Conditions
This program implements functions to check if circular queue is full or empty.
The isEmpty function checks if front is -1. The isFull function uses the condition
(rear+1)%SIZE == front to check fullness, which accounts for the circular nature
where rear can wrap around. These checks prevent queue overflow and underflow.
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
    
    bool isFull() {
        return (rear + 1) % SIZE == front;
    }
    
    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue is full! Cannot insert." << endl;
            return;
        }
        if (front == -1) front = 0;
        rear = (rear + 1) % SIZE;
        arr[rear] = value;
        cout << "Inserted: " << value << endl;
    }
    
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty! Cannot dequeue." << endl;
            return;
        }
        cout << "Removed: " << arr[front] << endl;
        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % SIZE;
        }
    }
    
    void checkStatus() {
        cout << "\nCircular Queue Status:" << endl;
        cout << "Is Empty: " << (isEmpty() ? "Yes" : "No") << endl;
        cout << "Is Full: " << (isFull() ? "Yes" : "No") << endl;
    }
};

int main() {
    CircularQueue cq;
    cq.checkStatus();
    
    cq.enqueue(10);
    cq.enqueue(20);
    cq.enqueue(30);
    cq.checkStatus();
    
    cq.enqueue(40);
    cq.checkStatus();
    
    cq.dequeue();
    cq.checkStatus();
    
    cq.enqueue(50);
    cq.checkStatus();
    
    return 0;
}
