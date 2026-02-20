#include <iostream>
#include <stdexcept>

using namespace std;

static const int maxSize = 5;

class Stack {
private:
    int stackArray[maxSize];
    int top;

public:
    Stack();              // Constructor
    bool isEmpty();
    bool isFull();
    void push(int data);
    int pop();
    int peek();
    void display();
    int size();
};

// Constructor
Stack::Stack() {
    top = -1;
}

// Check if stack is empty
bool Stack::isEmpty() {
    return (top == -1);
}

// Check if stack is full
bool Stack::isFull() {
    return (top == maxSize - 1);
}

// Push element into stack
void Stack::push(int data) {
    if (isFull()) {
        throw overflow_error("Stack Overflow");
    }
    stackArray[++top] = data;
}

// Pop element from stack
int Stack::pop() {
    if (isEmpty()) {
        throw underflow_error("Stack Underflow");
    }
    return stackArray[top--];
}

// Peek top element
int Stack::peek() {
    if (isEmpty()) {
        throw underflow_error("Stack is Empty");
    }
    return stackArray[top];
}

// Display stack elements
void Stack::display() {
    if (isEmpty()) {
        cout << "Stack is empty\n";
        return;
    }

    cout << "Stack elements: ";
    for (int i = top; i >= 0; i--) {
        cout << stackArray[i] << " ";
    }
    cout << endl;
}

// Return current size
int Stack::size() {
    return top + 1;
}

// Main function to test Stack
int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();

    cout << "Top element: " << s.peek() << endl;
    cout << "Popped: " << s.pop() << endl;

    s.display();

    cout << "Stack size: " << s.size() << endl;

    return 0;
}