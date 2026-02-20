/*
Linked List - Creation and Traversal
This program creates a singly linked list from an array of integers and traverses
it to print all elements. A singly linked list consists of nodes where each node
contains data and a pointer to the next node. The program creates nodes for each
array element and links them together, then traverses from head to print values.
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
    
    void createFromArray(int arr[], int size) {
        for (int i = 0; i < size; i++) {
            Node* newNode = new Node();
            newNode->data = arr[i];
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
    }
    
    void traverse() {
        if (head == NULL) {
            cout << "List is empty!" << endl;
            return;
        }
        Node* temp = head;
        cout << "Linked List: ";
        while (temp != NULL) {
            cout << temp->data;
            if (temp->next != NULL) cout << " -> ";
            temp = temp->next;
        }
        cout << " -> NULL" << endl;
    }
};

int main() {
    LinkedList list;
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    list.createFromArray(arr, size);
    list.traverse();
    
    return 0;
}
