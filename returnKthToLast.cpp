#include <iostream>
#include <forward_list>
#include <iterator>

std::pair<int, std::forward_list<int>::iterator> traverse(std::forward_list<int>::iterator it , int size, int index, std::forward_list<int> list)  {
    std::forward_list<int>::iterator saved_it = it;
    int saved_size = size;
    if (it == list.end()) return {size-1, list.end()};
    std::pair<int, std::forward_list<int>::iterator> received_pair = traverse(++it, ++size, index, list);
    if (received_pair.first == -1) return {-1, received_pair.second};
    if (received_pair.first - saved_size == index) return {-1, saved_it};
    return received_pair;
}

std::forward_list<int>::iterator returnKthToLast (std::forward_list<int> inputList, int index) {
    int size = 0;
    std::forward_list<int>::iterator it = inputList.begin();
    if (it == inputList.end()) return it;
    std::pair<int, std::forward_list<int>::iterator> resultPair = traverse(it, size, index, inputList);
    return resultPair.second;
}
