#include <iostream>
#include <stdexcept>

using namespace std;

static const int maxSize = 5;

class Queue {
private:
    int queueArray[maxSize];
    int front;
    int rear;
    int count;

public:
    Queue();              // Constructor
    bool isEmpty();
    bool isFull();
    void enqueue(int data);
    int dequeue();
    int peek();
    void display();
    int size();
};

// Constructor
Queue::Queue() {
    front = 0;
    rear = -1;
    count = 0;
}

// Check if queue is empty
bool Queue::isEmpty() {
    return (count == 0);
}

// Check if queue is full
bool Queue::isFull() {
    return (count == maxSize);
}

// Enqueue element into queue
void Queue::enqueue(int data) {
    if (isFull()) {
        throw overflow_error("Queue Overflow");
    }
    rear = (rear + 1) % maxSize;
    queueArray[rear] = data;
    count++;
}

// Dequeue element from queue
int Queue::dequeue() {
    if (isEmpty()) {
        throw underflow_error("Queue Underflow");
    }
    int data = queueArray[front];
    front = (front + 1) % maxSize;
    count--;
    return data;
}

// Peek front element
int Queue::peek() {
    if (isEmpty()) {
        throw underflow_error("Queue is Empty");
    }
    return queueArray[front];
}

// Display queue elements
void Queue::display() {
    if (isEmpty()) {
        cout << "Queue is empty\n";
        return;
    }

    cout << "Queue elements: ";
    int i = front;
    for (int j = 0; j < count; j++) {
        cout << queueArray[i] << " ";
        i = (i + 1) % maxSize;
    }
    cout << endl;
}

// Return current size
int Queue::size() {
    return count;
}

// Main function to test Queue
int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();

    cout << "Front element: " << q.peek() << endl;
    cout << "Dequeued: " << q.dequeue() << endl;

    q.display();

    cout << "Queue size: " << q.size() << endl;

    return 0;
}