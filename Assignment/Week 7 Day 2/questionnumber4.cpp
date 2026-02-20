/*
Linked List - Insertion at the Beginning
This program demonstrates inserting a new node at the beginning of a singly linked
list. It creates a new node, makes its next pointer point to the current head, and
then updates the head to this new node. This is a constant time O(1) operation,
making it very efficient for adding elements at the start.
*/

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class LinkedList {
    Node* head;
    
public:
    LinkedList() {
        head = NULL;
    }
    
    void insertAtBeginning(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = head;
        head = newNode;
        cout << "Inserted " << value << " at the beginning" << endl;
    }
    
    void display() {
        if (head == NULL) {
            cout << "List is empty!" << endl;
            return;
        }
        Node* temp = head;
        cout << "List: ";
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    LinkedList list;
    list.insertAtBeginning(30);
    list.display();
    list.insertAtBeginning(20);
    list.display();
    list.insertAtBeginning(10);
    list.display();
    
    return 0;
}
