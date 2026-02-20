/*
Circular Queue - Traversal/Display
This program demonstrates traversal of a circular queue. It prints all elements
from front to rear using a loop with modulo operator to handle the circular nature.
The loop starts at front and continues until reaching rear, wrapping around when
necessary. This shows all active elements in the queue.
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
    
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty! Nothing to display." << endl;
            return;
        }
        cout << "Circular Queue elements (Front to Rear): ";
        int i = front;
        int count = 0;
        while (true) {
            cout << arr[i];
            count++;
            if (i == rear) break;
            cout << " <- ";
            i = (i + 1) % SIZE;
        }
        cout << endl;
        cout << "Number of elements: " << count << endl;
        cout << "Front index: " << front << ", Rear index: " << rear << endl;
    }
};

int main() {
    CircularQueue cq;
    cq.display();
    cq.enqueue(5);
    cq.enqueue(15);
    cq.enqueue(25);
    cq.enqueue(35);
    cq.display();
    return 0;
}
