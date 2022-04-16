#include <iostream>
#include <string>
#include <vector>

bool isUniqueString(std::string inputString) {
    std::vector<int> uniqueHash;
    uniqueHash.assign(500, 0);
    for (char c : inputString) {        
        if (uniqueHash[c] != 0) return false;
        uniqueHash[c]++;
    }
    return true;
}

bool isUniqueStringCompact(std::string inputString) {

    for (int i = 0; i < inputString.length(); i++) {
        for (int j = i+1; j < inputString.length(); j++) {
            if (inputString[i] == inputString[j]) return false;
        }
    }
    return true;
}