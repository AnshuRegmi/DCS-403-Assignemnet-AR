/*
This program combines BST insertion, deletion, and search operations.
User can build a BST, delete nodes, and search to verify deletions.
It demonstrates how BST structure changes after removing nodes.
After deletion, searching the deleted key should return not found.
This is a practical application showing BST operations working together.
Functions are kept modular so each operation is independent and reusable.
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

Node* search(Node* root, int key) {
    if (root == nullptr || root->data == key) {
        return root;
    }
    if (key < root->data) {
        return search(root->left, key);
    }
    return search(root->right, key);
}

Node* findMin(Node* root) {
    while (root->left != nullptr) {
        root = root->left;
    }
    return root;
}

Node* deleteNode(Node* root, int key) {
    if (root == nullptr) {
        return root;
    }
    
    if (key < root->data) {
        root->left = deleteNode(root->left, key);
    } else if (key > root->data) {
        root->right = deleteNode(root->right, key);
    } else {
        if (root->left == nullptr) {
            Node* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == nullptr) {
            Node* temp = root->left;
            delete root;
            return temp;
        }
        
        Node* successor = findMin(root->right);
        root->data = successor->data;
        root->right = deleteNode(root->right, successor->data);
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
    int n, value;
    
    cout << "=== Building BST ===" << endl;
    cout << "Enter number of nodes: ";
    cin >> n;
    
    cout << "Enter " << n << " values:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Value " << (i + 1) << ": ";
        cin >> value;
        root = insert(root, value);
    }
    
    cout << "\nBST Inorder: ";
    inorder(root);
    cout << endl;
    
    cout << "\n=== Deletion ===" << endl;
    int deleteKey;
    cout << "Enter key to delete: ";
    cin >> deleteKey;
    
    root = deleteNode(root, deleteKey);
    
    cout << "BST Inorder after deletion: ";
    inorder(root);
    cout << endl;
    
    cout << "\n=== Search After Deletion ===" << endl;
    int searchKey;
    cout << "Enter key to search: ";
    cin >> searchKey;
    
    Node* result = search(root, searchKey);
    
    if (result != nullptr) {
        cout << "Key " << searchKey << " EXISTS in the BST" << endl;
    } else {
        cout << "Key " << searchKey << " NOT FOUND in the BST" << endl;
    }
    
    return 0;
}
