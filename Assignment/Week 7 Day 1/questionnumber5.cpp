/*
Linear Queue - Traversal/Display
This program demonstrates traversal operation which displays all elements in the
queue from front to rear. It uses a loop to iterate through the queue elements
starting from the front index to the rear index, printing each element. This helps
visualize the current state of the queue.
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
    
    void enqueue(int value) {
        if (rear == SIZE - 1) {
            cout << "Queue is full!" << endl;
            return;
        }
        if (front == -1) front = 0;
        arr[++rear] = value;
    }
    
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty! Nothing to display." << endl;
            return;
        }
        cout << "Queue elements (Front to Rear): ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i];
            if (i < rear) cout << " <- ";
        }
        cout << endl;
        cout << "Number of elements: " << (rear - front + 1) << endl;
    }
};

int main() {
    Queue q;
    q.display();
    q.enqueue(5);
    q.enqueue(15);
    q.enqueue(25);
    q.enqueue(35);
    q.display();
    return 0;
}
