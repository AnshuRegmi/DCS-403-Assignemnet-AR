/*
This program builds a Binary Search Tree based on user input.
User enters how many nodes they want and then provides the values.
Each value is inserted into the BST maintaining the BST property.
After all insertions, the tree is displayed using inorder traversal.
Inorder traversal of a BST always gives values in sorted ascending order.
This demonstrates dynamic BST construction from any user-provided data.
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

void inorder(Node* root) {
    if (root != nullptr) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

void preorder(Node* root) {
    if (root != nullptr) {
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(Node* root) {
    if (root != nullptr) {
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }
}

int main() {
    Node* root = nullptr;
    int n, value;
    
    cout << "Enter number of nodes: ";
    cin >> n;
    
    cout << "Enter " << n << " values:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Value " << (i + 1) << ": ";
        cin >> value;
        root = insert(root, value);
    }
    
    cout << "\nBST Traversals:" << endl;
    cout << "Inorder (sorted): ";
    inorder(root);
    cout << endl;
    
    cout << "Preorder: ";
    preorder(root);
    cout << endl;
    
    cout << "Postorder: ";
    postorder(root);
    cout << endl;
    
    return 0;
}
