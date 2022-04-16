#include <iostream>
#include <string>

std::string urlString(std::string stringInput) {
    std::string tempString = stringInput;
    tempString.append("        ");
    int i = 0;
    int j = i;
    for (i = 0; i < stringInput.size(); i++) {
        if (stringInput[i] == ' ') {
            tempString[j] = '%';
            j++;
            tempString[j] = '2';
            j++;
            tempString[j] = '0';
            j++;
            continue;
        }
        tempString[j] = stringInput[i];
        j++;
    }
    return tempString;
}