/*
Linked List - Insertion at the End
This program demonstrates inserting a new node at the end of a singly linked list.
It traverses to the last node and makes its next pointer point to the newly created
node. Special handling is done for empty lists where the new node becomes the head.
This operation is commonly used to append elements to a list.
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
    
    void insertAtEnd(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;
        
        if (head == NULL) {
            head = newNode;
            cout << "Inserted " << value << " as first element" << endl;
        } else {
            Node* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
            cout << "Inserted " << value << " at the end" << endl;
        }
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
    list.insertAtEnd(10);
    list.display();
    list.insertAtEnd(20);
    list.display();
    list.insertAtEnd(30);
    list.display();
    
    return 0;
}
