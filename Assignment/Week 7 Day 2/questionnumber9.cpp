/*
Linked List - Insert After a Given Value
This program inserts a new node with value Y immediately after the first node
containing value X. It searches for the node with value X, creates a new node
with value Y, and updates the next pointers to insert Y between X and the node
that was originally after X.
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
    
    void insertAfter(int x, int y) {
        Node* temp = head;
        
        while (temp != NULL && temp->data != x) {
            temp = temp->next;
        }
        
        if (temp == NULL) {
            cout << "Value " << x << " not found in the list" << endl;
            return;
        }
        
        Node* newNode = new Node();
        newNode->data = y;
        newNode->next = temp->next;
        temp->next = newNode;
        
        cout << "Inserted " << y << " after " << x << endl;
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
    list.insertAfter(30, 35);
    list.display();
    list.insertAfter(10, 15);
    list.display();
    
    return 0;
}
