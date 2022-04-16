#include <forward_list>
#include <stack>
#include <iostream>
#include <iterator>

std::forward_list<int> partitionList(std::forward_list<int> listInput, int partitionValue) {
    std::stack<int> deletedValues;
    std::forward_list<int> tempList = listInput;
    std::forward_list<int>::iterator it = tempList.begin();
    
    if (tempList.empty()) return tempList;

    while ((*it < partitionValue) && (it != tempList.end())) {
        deletedValues.push(*it);
        it++;
        tempList.pop_front();
    }
    
    if (!tempList.empty()) {
        while (std::next(it, 1) != tempList.end()) {
            if (*(std::next(it, 1)) < partitionValue) {
                deletedValues.push(*(std::next(it,1)));
                tempList.erase_after(it);
                continue;
            }
        it++;
        }
    }

    while (!deletedValues.empty()) {
        tempList.push_front(deletedValues.top());
        deletedValues.pop();
    }
    return tempList;
}
