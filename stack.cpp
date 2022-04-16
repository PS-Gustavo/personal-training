#include <iostream>
#include <stack>

void printStack (std::stack<int> stackInput) {
    while (!stackInput.empty()) {
        std::cout << stackInput.top() << std::endl;
        stackInput.pop();
    }
}