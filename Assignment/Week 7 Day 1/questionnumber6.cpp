/*
Linear Queue - Check Full/Empty Conditions
This program implements functions to check if the queue is full or empty. The
isEmpty function checks if front is -1 or front has crossed rear, indicating no
elements. The isFull function checks if rear has reached the maximum size (SIZE-1).
These checks prevent overflow and underflow errors.
*/

#include <iostream>
using namespace std;

#define SIZE 5

class Queue {
    int arr[SIZE];
    int front, rear;
    
public:
    Queue() {
        front = -1;
        rear = -1;
    }
    
    bool isEmpty() {
        return front == -1 || front > rear;
    }
    
    bool isFull() {
        return rear == SIZE - 1;
    }
    
    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue is full! Cannot insert." << endl;
            return;
        }
        if (front == -1) front = 0;
        arr[++rear] = value;
        cout << "Inserted: " << value << endl;
    }
    
    void checkStatus() {
        cout << "\nQueue Status:" << endl;
        cout << "Is Empty: " << (isEmpty() ? "Yes" : "No") << endl;
        cout << "Is Full: " << (isFull() ? "Yes" : "No") << endl;
    }
};

int main() {
    Queue q;
    q.checkStatus();
    
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.checkStatus();
    
    q.enqueue(40);
    q.enqueue(50);
    q.checkStatus();
    
    return 0;
}
