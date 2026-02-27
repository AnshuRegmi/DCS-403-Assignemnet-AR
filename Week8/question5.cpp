/*
This program finds the minimum and maximum values in a Binary Search Tree.
In BST, the minimum is always the leftmost node (keep going left).
The maximum is always the rightmost node (keep going right).
Both recursive and iterative versions are implemented here.
Recursive versions use base case when there's no more left/right child.
Iterative versions use while loops to traverse to the extreme ends.
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

Node* findMinRecursive(Node* root) {
    if (root == nullptr) {
        return nullptr;
    }
    if (root->left == nullptr) {
        return root;
    }
    return findMinRecursive(root->left);
}

Node* findMaxRecursive(Node* root) {
    if (root == nullptr) {
        return nullptr;
    }
    if (root->right == nullptr) {
        return root;
    }
    return findMaxRecursive(root->right);
}

Node* findMinIterative(Node* root) {
    if (root == nullptr) {
        return nullptr;
    }
    while (root->left != nullptr) {
        root = root->left;
    }
    return root;
}

Node* findMaxIterative(Node* root) {
    if (root == nullptr) {
        return nullptr;
    }
    while (root->right != nullptr) {
        root = root->right;
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
    
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 20);
    insert(root, 40);
    insert(root, 60);
    insert(root, 80);
    insert(root, 15);
    insert(root, 85);
    
    cout << "BST Inorder: ";
    inorder(root);
    cout << endl;
    
    Node* minRec = findMinRecursive(root);
    Node* maxRec = findMaxRecursive(root);
    Node* minIter = findMinIterative(root);
    Node* maxIter = findMaxIterative(root);
    
    cout << "\nUsing Recursive Functions:" << endl;
    cout << "Minimum: " << minRec->data << endl;
    cout << "Maximum: " << maxRec->data << endl;
    
    cout << "\nUsing Iterative Functions:" << endl;
    cout << "Minimum: " << minIter->data << endl;
    cout << "Maximum: " << maxIter->data << endl;
    
    return 0;
}
