#include <iostream>
#include <vector>
#include <iterator>

void vectorPrint(std::vector<int> arrayInput) {
    // for (int i = 0; i < arrayInput.size(); i++) {
    //     std::cout << "vector[" << i << "] = " << arrayInput[i] << std::endl;
    // }

    //std::cout << "Now via iterator:" << std::endl;

    std::vector<int>::iterator it = arrayInput.begin();
    while (it != arrayInput.end()) {
        std::cout << *it << std::endl;
        it++;
    }
}

