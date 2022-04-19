#include <iostream>

class BSTree {
    public:
        int value_;
        BSTree* left_leaf_;
        BSTree* right_leaf_;

        BSTree(int value) {
            this->value_ = value;
            this->left_leaf_ = nullptr;
            this->right_leaf_ = nullptr;
        }

        BSTree(int value, BSTree* left, BSTree* right) {
            this->value_ = value;
            this->left_leaf_ = left;
            this->right_leaf_ = right;
        }
};

void isBalancedTree(BSTree* node, bool* is_bst) {
    if (node == nullptr) return;
    if (!(*is_bst)) return;

    if (node->left_leaf_ != nullptr) {
        if (node->value_ < node->left_leaf_->value_) {
            (*is_bst) = false;
        }
    }
    if (node->right_leaf_ != nullptr) {
        if (node->value_ >= node->right_leaf_->value_) {
            (*is_bst) = false;
        }
    }

    isBalancedTree(node->left_leaf_, is_bst);
    isBalancedTree(node->right_leaf_, is_bst);
}

bool checkBalancedTree(BSTree* root) {
    
    bool* is_balanced = new bool(true);
    isBalancedTree(root, is_balanced);
    return (*is_balanced);
}