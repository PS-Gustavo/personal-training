#include <iostream>

class BinarySearchNode {
    public:
    int value;
    BinarySearchNode* leaf_left;
    BinarySearchNode* leaf_right;

    BinarySearchNode() {
        this->leaf_left = nullptr;
        this->leaf_right = nullptr;
        this->value = 0;
    }

    BinarySearchNode(int value) {
        this->leaf_right = nullptr;
        this->leaf_left = nullptr;
        this->value = value;
    }

    void treeInsert(BinarySearchNode *node) {
        if (node->value <= this->value) {
            if (this->leaf_left != nullptr) {
                this->leaf_left->treeInsert(node);
                return;
            }
            this->leaf_left = node;
            return;
        }
        if (this->leaf_right != nullptr) {
            this->leaf_right->treeInsert(node);
            return;
        }
        this->leaf_right = node;
    }
};

void inOrderSweep(BinarySearchNode *treeNode) {
    if(treeNode != nullptr) {
        inOrderSweep(treeNode->leaf_left);
        std::cout << treeNode->value << std::endl;
        inOrderSweep(treeNode->leaf_right);
    }
}

void preOrderSweep(BinarySearchNode *treeNode) {
    if(treeNode != nullptr) {
        std::cout << treeNode->value << std::endl;
        inOrderSweep(treeNode->leaf_left);
        inOrderSweep(treeNode->leaf_right);
    }
}

void posOrderSweep(BinarySearchNode *treeNode) {
    if(treeNode != nullptr) {
        inOrderSweep(treeNode->leaf_left);
        inOrderSweep(treeNode->leaf_right);
        std::cout << treeNode->value << std::endl;
    }
}

