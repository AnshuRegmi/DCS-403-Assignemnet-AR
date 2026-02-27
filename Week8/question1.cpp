/*
This program searches for a value in a Binary Search Tree using recursion.
It starts from the root and compares the key with current node.
If key is smaller, it goes left. If key is bigger, it goes right.
When the key matches the node's data, it returns that node.
If it reaches a null pointer, the key doesn't exist in the tree.
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

Node* insert(Node* root, int value) {
    if (root == nullptr) {
        return createNode(value);
    }
    if (value < root->data) {
        root->left = insert(root->left, value);
    } else if (value > root->data) {
        root->right = insert(root->right, value);
    }
    return root;
}

Node* recursiveSearch(Node* root, int key) {
    if (root == nullptr || root->data == key) {
        return root;
    }
    if (key < root->data) {
        return recursiveSearch(root->left, key);
    }
    return recursiveSearch(root->right, key);
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
    
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 20);
    insert(root, 40);
    insert(root, 60);
    insert(root, 80);
    
    cout << "BST Inorder: ";
    inorder(root);
    cout << endl;
    
    int key;
    cout << "Enter key to search: ";
    cin >> key;
    
    Node* result = recursiveSearch(root, key);
    
    if (result != nullptr) {
        cout << "Found: " << result->data << endl;
    } else {
        cout << "Key " << key << " not found in BST" << endl;
    }
    
    return 0;
}
