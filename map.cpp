#include <map>
#include <string>
#include <iostream>

void printMap(std::map<std::string, int> inputMap) {
    int i = 0;
    for (std::map<std::string,int>::iterator it = inputMap.begin(); it != inputMap.end(); it++) {
        std::cout << i << ": " << it->first << ": " << it->second << std::endl;
        i++;
    }
}