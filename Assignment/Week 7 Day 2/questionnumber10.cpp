/*
Linked List - Print in Reverse Order (using recursion)
This program prints the elements of a singly linked list in reverse order without
modifying the actual list structure. It uses recursion to travel to the end of the
list, and as the recursive calls return, each node's value is printed. This creates
a reverse order output while maintaining the original list.
*/

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class LinkedList {
    Node* head;
    
    void printReverseHelper(Node* node) {
        if (node == NULL) {
            return;
        }
        printReverseHelper(node->next);
        cout << node->data << " ";
    }
    
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
    
    void printReverse() {
        cout << "List in reverse order: ";
        printReverseHelper(head);
        cout << endl;
    }
    
    void display() {
        Node* temp = head;
        cout << "Original list: ";
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
    list.printReverse();
    
    return 0;
}
