#include <iostream>

class BinaryNode {
    public:
    int value;
    BinaryNode* leaf_left;
    BinaryNode* leaf_right;

    BinaryNode() {
        this->leaf_left = nullptr;
        this->leaf_right = nullptr;
        this->value = 0;
    }

    BinaryNode(int value) {
        this->leaf_right = nullptr;
        this->leaf_left = nullptr;
        this->value = value;
    }

    BinaryNode(int value, BinaryNode* left, BinaryNode* right) {
        this->leaf_right = right;
        this->leaf_left = left;
        this->value = value;
    }
};

void inOrderSweep(BinaryNode *treeNode) {
    if(treeNode != nullptr) {
        inOrderSweep(treeNode->leaf_left);
        std::cout << treeNode->value << std::endl;
        inOrderSweep(treeNode->leaf_right);
    }
}

void preOrderSweep(BinaryNode *treeNode) {
    if(treeNode != nullptr) {
        std::cout << treeNode->value << std::endl;
        inOrderSweep(treeNode->leaf_left);
        inOrderSweep(treeNode->leaf_right);
    }
}

void posOrderSweep(BinaryNode *treeNode) {
    if(treeNode != nullptr) {
        inOrderSweep(treeNode->leaf_left);
        inOrderSweep(treeNode->leaf_right);
        std::cout << treeNode->value << std::endl;
    }
}