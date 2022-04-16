
#include <queue>
#include <iostream>

void printQueue(std::queue<int> inputQueue) {
    while (!inputQueue.empty()) {
        std::cout << inputQueue.front() << std::endl;
        inputQueue.pop();
    }
}