#include <iostream>
#include <map>
#include <iterator>
#include <vector>

bool checkPermutation(std::string firstString, std::string secondString) {
    
    if(firstString.size() != secondString.size()) return false;
    
    std::vector<int> hashMap;
    hashMap.assign(256, 0);

    for (int i = 0; i < firstString.size(); i++) {
        hashMap[firstString[i]]++;
        hashMap[secondString[i]]--;
    }

    for (int i = 0; i < hashMap.size(); i++) {
        if (hashMap[i] != 0)    return false;
    }

    return true;
}

bool checkPermutationCompact (std::string firstString, std::string secondString) {
    int stringSum = 0;
    std::vector<int> hashMap;
    hashMap.assign(256, 0);

    if ( firstString.size() != secondString.size() ) return false;

    for ( int i = 0; i < firstString.size(); i++ ) {
        stringSum += firstString[i];
        stringSum -= secondString[i];

        hashMap[firstString[i]]++;
        hashMap[secondString[i]]--;
    }

    if ( stringSum != 0 ) return false;

    for ( int i : hashMap ) {
        if (i != 0) return false;
    }

    return true;
}
