#include <vector>
#include <list>
#include <iostream>
#include <iterator>

class DLNode {
    public:
    int value_;
    DLNode* left_leaf_;
    DLNode* right_leaf_;

    DLNode(int value) {
        this->value_ = value;
    }

    DLNode(int value, DLNode* left_leaf, DLNode* right_leaf) {
        this->value_ = value;
        this->left_leaf_ = left_leaf;
        this->right_leaf_ = right_leaf;
    }
};

void populateLists(std::vector<std::list<DLNode*>>* depth_list, DLNode * node, int depth) {
    if (node == nullptr) return;
    
    std::cout << "node " << node->value_ << ": " << ((*depth_list).size()) << " vs " << depth << std::endl;
    if (((*depth_list).size()) <= depth) {
        std::list<DLNode*> new_list{node};
        (*depth_list).push_back(new_list);
    } else {
        (*depth_list)[depth].push_back(node);
    }
    populateLists(depth_list, node->left_leaf_, depth+1);
    populateLists(depth_list, node->right_leaf_, depth+1);
}

std::vector<std::list<DLNode*>> depthListGenerator(DLNode * root) {
    std::vector<std::list<DLNode*>>* depth_list = new std::vector<std::list<DLNode*>>();
    populateLists(depth_list, root, 0);
    return *depth_list;
}