/*
Linked List - Count Number of Nodes
This program counts the total number of nodes in a singly linked list. It initializes
a counter variable to zero and traverses through the entire list from head to end,
incrementing the counter for each node encountered. This operation helps determine
the size of the list.
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
    
    int countNodes() {
        int count = 0;
        Node* temp = head;
        
        while (temp != NULL) {
            count++;
            temp = temp->next;
        }
        
        return count;
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
    cout << "Total number of nodes: " << list.countNodes() << endl;
    
    return 0;
}
