/*
This program searches for a value in a Binary Search Tree without using recursion.
It uses a while loop to traverse the tree from root to leaves.
Starting at root, if key is smaller go left, if bigger go right.
The loop continues until the key is found or we hit a null pointer.
This iterative approach avoids function call overhead of recursion.
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

Node* iterativeSearch(Node* root, int key) {
    while (root != nullptr) {
        if (key == root->data) {
            return root;
        } else if (key < root->data) {
            root = root->left;
        } else {
            root = root->right;
        }
    }
    return nullptr;
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
    
    Node* result = iterativeSearch(root, key);
    
    if (result != nullptr) {
        cout << "Found: " << result->data << endl;
    } else {
        cout << "Key " << key << " not found in BST" << endl;
    }
    
    return 0;
}
