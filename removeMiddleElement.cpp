#include <forward_list>
#include <iostream>
#include <iterator>

std::forward_list<int> removeMiddleElement (std::forward_list<int> inputList, int targetElement ) {
    if (inputList.empty()) return inputList;
    std::forward_list<int> tempList = inputList;
    std::forward_list<int>::iterator it = tempList.begin();
    while ((*(std::next(it, 1)) != targetElement) && (std::next(it, 2) != tempList.end()))  it++;
    if (std::next(it, 2) == tempList.end()) return tempList;
    tempList.erase_after(it);
    return tempList;
}
