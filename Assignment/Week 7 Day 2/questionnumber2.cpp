/*
Linked List - Searching an Element
This program searches for a specific value in a singly linked list. It traverses
the list while comparing each node's data with the search value. A counter keeps
track of the position (1-based index). If the element is found, its position is
printed; otherwise, a message indicates the element is not present.
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
    
    void search(int value) {
        Node* temp = head;
        int position = 1;
        
        while (temp != NULL) {
            if (temp->data == value) {
                cout << "Element " << value << " found at position " << position << endl;
                return;
            }
            temp = temp->next;
            position++;
        }
        
        cout << "Element " << value << " not found in the list" << endl;
    }
    
    void display() {
        Node* temp = head;
        cout << "List: ";
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
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
    list.search(30);
    list.search(100);
    
    return 0;
}
