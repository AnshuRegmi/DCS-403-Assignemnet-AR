/*
This program inserts nodes into a Binary Search Tree without recursion.
It uses a while loop to find the correct position for the new node.
We keep track of a parent pointer as we traverse down the tree.
Once we find a null position, we attach the new node to the parent.
Special handling for empty tree where new node becomes the root.
Duplicate values are ignored to maintain BST property.
*/

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}

Node* iterativeInsert(Node* root, int value) {
    Node* newNode = createNode(value);
    
    if (root == nullptr) {
        return newNode;
    }
    
    Node* current = root;
    Node* parent = nullptr;
    
    while (current != nullptr) {
        parent = current;
        
        if (value == current->data) {
            delete newNode;
            return root;
        } else if (value < current->data) {
            current = current->left;
        } else {
            current = current->right;
        }
    }
    
    if (value < parent->data) {
        parent->left = newNode;
    } else {
        parent->right = newNode;
    }
    
    return root;
}

void inorder(Node* root) {
    if (root != nullptr) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

int main() {
    Node* root = nullptr;
    
    int values[] = {50, 30, 70, 20, 40, 60, 80, 30, 50};
    int n = sizeof(values) / sizeof(values[0]);
    
    cout << "Inserting values: ";
    for (int i = 0; i < n; i++) {
        cout << values[i] << " ";
        root = iterativeInsert(root, values[i]);
    }
    cout << endl;
    
    cout << "BST Inorder (duplicates ignored): ";
    inorder(root);
    cout << endl;
    
    int newValue;
    cout << "Enter a value to insert: ";
    cin >> newValue;
    
    root = iterativeInsert(root, newValue);
    
    cout << "BST Inorder after insertion: ";
    inorder(root);
    cout << endl;
    
    return 0;
}
