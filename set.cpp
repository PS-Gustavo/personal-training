#include <iostream>
#include <set>

void printSet(std::set<int> inputSet) {
    int i = 0;
    for (std::set<int>::iterator it = inputSet.begin(); it != inputSet.end(); it++) {
        std::cout << i << ": " << *it << std::endl;
        i++;
    }
}