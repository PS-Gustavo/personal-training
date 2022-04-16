
#include <list>
#include <iterator>
#include <iostream>

void printListElements ( std::list<int> listInput ) {
    for (std::list<int>::iterator it = listInput.begin(); it != listInput.end(); it++) {
        std::cout << *it << std::endl;
    }
}