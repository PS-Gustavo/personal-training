#include <iostream>
#include <vector>

class MinHeap {

    public:

    std::vector<int> heap;

    MinHeap(int value) {
        this->heap.push_back(value);
    }

    void insert(int value) {
        heap.push_back(value);
        int last_index = heap.size()-1;
        if (this->heap[last_index] < this->heap[(last_index-1)/2]) {
            bubbleUp(last_index);
        }
    }

    int extractMin() {
        int min_value = this->heap[0];
        this->heap[0] = this->heap[(this->heap).size()-1];
        (this->heap).pop_back();
        bubbleDown(0);
        return min_value;
    }

    void bubbleDown(int index) {
        int left_leaf = (index*2+1);
        int right_leaf = (index*2+2);

        if (right_leaf > (this->heap).size()) return;
        int value_temp = this->heap[index];
        if (left_leaf > (this->heap).size()) {
            this->heap[index] = this->heap[right_leaf];
            this->heap[right_leaf] = value_temp;
            return;
        }
        if (this->heap[left_leaf] <= this->heap[right_leaf]) {
            this->heap[index] = this->heap[left_leaf];
            this->heap[left_leaf] = value_temp;
            bubbleDown(left_leaf);
            return;
        }
        this->heap[index] = this->heap[right_leaf];
        this->heap[right_leaf] = value_temp;
        bubbleDown(right_leaf);
    }

    void bubbleUp(int last_index) {
        int parent_index = (last_index-1)/2;
        if (this->heap[last_index] >= this->heap[parent_index]) return;
        int temp_value = this->heap[last_index];
        this->heap[last_index] = this->heap[parent_index];
        this->heap[parent_index] = temp_value;
        bubbleUp(parent_index);
    }

    void printHeap() {
        for (int i : this->heap) {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    }

};

