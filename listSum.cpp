#include <forward_list>
#include <iostream>

std::forward_list<int> listSum(std::forward_list<int> list1, std::forward_list<int> list2) {
    std::forward_list<int> sum_list;
    std::forward_list<int>::iterator it1, it2;
    it1 = list1.begin();
    it2 = list2.begin();
    
    int sum = 0;
    int carryout = 0;
    
    while ((it1 != list1.end()) || (it2 != list2.end()) || (carryout != 0) ) {
        if (it1 != list1.end()) {
            sum += *it1;
            it1++;
        }
        if (it2 != list2.end()) {
            sum += *it2;
            it2++;
        }
        sum += carryout;
        carryout = sum / 10;
        sum = sum % 10;
        sum_list.push_front(sum);
        sum = 0;
    }
    sum_list.reverse();
    return sum_list;
}
