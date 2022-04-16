#include <iostream>
#include <string>
#include <vector>

char lowerCase(char inputChar) {
    return ((inputChar < 'a') && (inputChar != ' ')) ? (inputChar + 32) : (inputChar);
}

bool isPalindromePermutation(std::string inputString) {
    std::vector<int> letterHash;
    letterHash.assign(256, 0);
    
    char lowerCaseLetter;
    for (char c : inputString) {
        lowerCaseLetter = lowerCase(c);
        if (lowerCaseLetter != ' ') letterHash[lowerCaseLetter]++;
    }
    
    int oddFlag = 0;
    for (char c : inputString) {
        lowerCaseLetter = lowerCase(c);
        if ( (letterHash[lowerCaseLetter] % 2) == 1) oddFlag++;
        if (oddFlag > 1) return false; 
    }
    return true;
}
