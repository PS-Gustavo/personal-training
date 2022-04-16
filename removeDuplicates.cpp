#include <iostream>
#include <list>
#include <iterator>
#include <vector>

std::list<int> removeDuplicates(std::list<int> inputList, int valueRange) {
    std::vector<bool> existsVector(valueRange, 0);
    std::list<int> inputDuplicate = inputList;
    
    for (std::list<int>::iterator it = inputDuplicate.begin(); it != inputDuplicate.end(); it++) {
        if (existsVector[*it]) {
            std::list<int>::iterator temp_it = it;
            it--;
            inputDuplicate.erase(temp_it);
            continue;
        }
        existsVector[*it] = true;
    }
    return inputDuplicate;
}
