/*
Linked List - Deletion of an Element by Value
This program deletes the first occurrence of a specified value from the linked list.
It searches for the node containing the value while maintaining a pointer to the
previous node. When found, the previous node's next pointer is updated to skip the
target node. Special cases are handled for deleting the head node and when the list is empty.
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
    
    void deleteByValue(int value) {
        if (head == NULL) {
            cout << "List is empty!" << endl;
            return;
        }
        
        if (head->data == value) {
            Node* temp = head;
            head = head->next;
            delete temp;
            cout << "Deleted " << value << " from the list" << endl;
            return;
        }
        
        Node* prev = head;
        Node* curr = head->next;
        
        while (curr != NULL) {
            if (curr->data == value) {
                prev->next = curr->next;
                delete curr;
                cout << "Deleted " << value << " from the list" << endl;
                return;
            }
            prev = curr;
            curr = curr->next;
        }
        
        cout << "Element " << value << " not found" << endl;
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
    
    list.deleteByValue(30);
    list.display();
    
    list.deleteByValue(10);
    list.display();
    
    list.deleteByValue(100);
    
    return 0;
}
