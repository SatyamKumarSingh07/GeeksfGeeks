#include<bits/stdc++.h>
using namespace std;

// Definition for a binary tree node.
struct Node {
    int data;
    Node* left;
    Node* right;
    
    Node(int x) {
        data = x;
        left = right = NULL;
    }
};

Node* insert(Node* root, int K) {
    // If the tree is empty, create a new node as the root
    if (root == NULL) {
        return new Node(K);
    }

    // If the key is less than the current node's value, insert in the left subtree
    if (K < root->data) {
        root->left = insert(root->left, K);
    }
    // If the key is greater than the current node's value, insert in the right subtree
    else if (K > root->data) {
        root->right = insert(root->right, K);
    }

    return root;
}

int main() {
    // Example usage:
    // Create a simple BST: 2 -> 1,3
    Node* root = new Node(2);
    root->left = new Node(1);
    root->right = new Node(3);

    // Insert a new key (e.g., 4)
    Node* newRoot = insert(root, 4);

cout << "newRoot->data: " << newRoot->data << endl;
cout << "newRoot->left->data: " << newRoot->left->data << endl;
cout << "newRoot->right->data: " << newRoot->right->data << endl;


    // Add code to use or display the modified tree as needed

    return 0;
}
