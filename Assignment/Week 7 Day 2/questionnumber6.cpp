/*
Linked List - Deletion at a Given Position
This program deletes a node at a specified position (1-based index) from the linked
list. It traverses to the node just before the target position, then updates pointers
to bypass the target node. Special attention is given to deleting the head node
(position 1) and handling invalid positions.
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
    
    void insert(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;
        
        if (head == NULL) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }
    
    void deleteAtPosition(int position) {
        if (head == NULL) {
            cout << "List is empty!" << endl;
            return;
        }
        
        if (position == 1) {
            Node* temp = head;
            head = head->next;
            delete temp;
            cout << "Deleted node at position " << position << endl;
            return;
        }
        
        Node* prev = head;
        int count = 1;
        
        while (prev != NULL && count < position - 1) {
            prev = prev->next;
            count++;
        }
        
        if (prev == NULL || prev->next == NULL) {
            cout << "Invalid position!" << endl;
            return;
        }
        
        Node* temp = prev->next;
        prev->next = temp->next;
        delete temp;
        cout << "Deleted node at position " << position << endl;
    }
    
    void display() {
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
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);
    list.insert(50);
    list.display();
    
    list.deleteAtPosition(3);
    list.display();
    
    list.deleteAtPosition(1);
    list.display();
    
    list.deleteAtPosition(10);
    
    return 0;
}
