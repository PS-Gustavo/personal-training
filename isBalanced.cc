#include <iostream>

class IBNode {
    public:
        int value_;
        IBNode* left_leaf_;
        IBNode* right_leaf_;

        IBNode(int value) {
            this->value_ = value;
            this->left_leaf_ = nullptr;
            this->right_leaf_ = nullptr;
        }

        IBNode(int value, IBNode* left, IBNode* right) {
            this->value_ = value;
            this->left_leaf_ = left;
            this->right_leaf_ = right;
        }
};

void inOrderSweep(IBNode* node, int depth, int* min_depth, int* max_depth) {
    if (node == nullptr) {
        if (depth > (*max_depth)) (*max_depth) = depth;
        if (depth < (*min_depth)) (*min_depth) = depth;
        return;
    }
    if ((*max_depth) - (*min_depth) > 1) return;
    inOrderSweep(node->left_leaf_, depth+1, min_depth, max_depth);
    inOrderSweep(node->right_leaf_,depth+1, min_depth, max_depth);
}

bool isTreeBalanced(IBNode* root) {
    int* min_depth = new int(10000);
    int* max_depth = new int(0);
    
    inOrderSweep(root, 0, min_depth, max_depth);
    
    if (((*max_depth)-(*min_depth)) > 1) {
        free(min_depth);
        free(max_depth);
        return false;
    }
    free(min_depth);
    free(max_depth);
    return true;
}