/*
This program inserts nodes into a Binary Search Tree using recursion.
When inserting, we compare the new value with current node's data.
If smaller, we recursively insert into left subtree.
If larger, we recursively insert into right subtree.
When we reach a null position, we create and place the new node there.
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

Node* recursiveInsert(Node* root, int value) {
    if (root == nullptr) {
        return createNode(value);
    }
    
    if (value < root->data) {
        root->left = recursiveInsert(root->left, value);
    } else if (value > root->data) {
        root->right = recursiveInsert(root->right, value);
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
        root = recursiveInsert(root, values[i]);
    }
    cout << endl;
    
    cout << "BST Inorder (duplicates ignored): ";
    inorder(root);
    cout << endl;
    
    int newValue;
    cout << "Enter a value to insert: ";
    cin >> newValue;
    
    root = recursiveInsert(root, newValue);
    
    cout << "BST Inorder after insertion: ";
    inorder(root);
    cout << endl;
    
    return 0;
}
