#include <iostream>

class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

class BinarySearchTree {
private:
    TreeNode* root;

public:
    BinarySearchTree() {
        root = nullptr;
    }

    void insert(int val) {
        root = insertRecursive(root, val);
    }

    void remove(int val) {
        root = removeRecursive(root, val);
    }

    bool search(int val) {
        return searchRecursive(root, val);
    }

    void inorder() {
        inorderRecursive(root);
        std::cout << std::endl;
    }

private:
    TreeNode* insertRecursive(TreeNode* node, int val) {
        if (node == nullptr) {
            return new TreeNode(val);
        }

        if (val < node->data) {
            node->left = insertRecursive(node->left, val);
        }
        else if (val > node->data) {
            node->right = insertRecursive(node->right, val);
        }

        return node;
    }

    TreeNode* removeRecursive(TreeNode* node, int val) {
        if (node == nullptr) {
            return node;
        }

        if (val < node->data) {
            node->left = removeRecursive(node->left, val);
        }
        else if (val > node->data) {
            node->right = removeRecursive(node->right, val);
        }
        else {
            if (node->left == nullptr) {
                TreeNode* temp = node->right;
                delete node;
                return temp;
            }
            else if (node->right == nullptr) {
                TreeNode* temp = node->left;
                delete node;
                return temp;
            }

            TreeNode* temp = minValueNode(node->right);
            node->data = temp->data;
            node->right = removeRecursive(node->right, temp->data);
        }

        return node;
    }

    bool searchRecursive(TreeNode* node, int val) {
        if (node == nullptr) {
            return false;
        }

        if (val == node->data) {
            return true;
        }
        else if (val < node->data) {
            return searchRecursive(node->left, val);
        }
        else {
            return searchRecursive(node->right, val);
        }
    }

    TreeNode* minValueNode(TreeNode* node) {
        while (node->left != nullptr) {
            node = node->left;
        }
        return node;
    }

    void inorderRecursive(TreeNode* node) {
        if (node == nullptr) {
            return;
        }

        inorderRecursive(node->left);
        std::cout << node->data << " ";
        inorderRecursive(node->right);
    }
};

int main() {
    BinarySearchTree bst;
    bst.insert(50);
    bst.insert(30);
    bst.insert(20);
    bst.insert(40);
    bst.insert(70);
    bst.insert(60);
    bst.insert(80);

    std::cout << "Inorder Traversal: ";
    bst.inorder();

    int key = 40;
    if (bst.search(key)) {
        std::cout << key << " found in the tree." << std::endl;
    } else {
        std::cout << key << " not found in the tree." << std::endl;
    }

    bst.remove(40);
    std::cout << "Inorder Traversal after removing 40: ";
    bst.inorder();

    return 0;
}
