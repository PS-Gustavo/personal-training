#include <iostream>
#include <vector>
#include <iterator>

class MTNode {
    public:
    int value_;
    MTNode * left_leaf_;
    MTNode * right_leaf_;

    MTNode(int value) {
        this->value_ = value;
    }
};

MTNode* populateTree(std::vector<int> input_array, int lower_boundary, int upper_boundary) {
    if (lower_boundary > upper_boundary) return nullptr;
    
    int middle_index = (lower_boundary + upper_boundary)/2;
    
    MTNode * node = new MTNode(input_array[middle_index]);
    node->left_leaf_ = populateTree(input_array, lower_boundary, middle_index-1);
    node->right_leaf_ = populateTree(input_array, middle_index+1, upper_boundary);
    return node;
}

MTNode* minimalTree(std::vector<int> input_array) {
    return populateTree(input_array, 0, input_array.size()-1);;
}

void inOrderMTSweep(MTNode *treeNode) {
    if(treeNode != nullptr) {
        std::cout << treeNode->value_ << std::endl;
        inOrderMTSweep(treeNode->left_leaf_);
        
        inOrderMTSweep(treeNode->right_leaf_);
    }
}