#include <deque>
#include <iostream>

void printDeque(std::deque<int> inputDeque) {
    int i = 0;
    while(!inputDeque.empty()) {
        std::cout << i++ << ": " << inputDeque.front() << std::endl;
        inputDeque.pop_front();
    }
}