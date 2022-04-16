#include <iostream>
#include <queue>

void printPQ(std::priority_queue<int> inputPQ) {
    int i = 0;
    while (!inputPQ.empty()) {
        std::cout << i++ << ": " << inputPQ.top() << std::endl;
        inputPQ.pop();
    }
}

void printReversePQ(std::priority_queue<int> inputPQ) {
    int i = 0;
    while (!inputPQ.empty()) {
        std::cout << i++ << ": " << (inputPQ.top() * (-1)) << std::endl;
        inputPQ.pop();
    }
}