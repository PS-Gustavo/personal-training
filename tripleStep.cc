
#include <iostream>
#include <vector>


int recursiveTripleStep(int n, int k, std::vector<int>& memo_vector) {
    if (memo_vector[n-k] != 0) return memo_vector[n-k];
    if ((n-k) == 1) {
        memo_vector[0] = 1;
        return 1;
    }
    if ((n-k) == 2) {
        memo_vector[1] = 2;
        return 2;
    }
    if ((n-k) == 3) {
        memo_vector[2] = 4;
        return 4;
    }

    memo_vector[n-k] = recursiveTripleStep(n, k+3, memo_vector) + recursiveTripleStep(n, k+2, memo_vector) + recursiveTripleStep(n, k+1, memo_vector);

    return memo_vector[n-k];
}

int tripleStep(int n) {

    std::vector<int>* memo_vector = new std::vector<int>(n, 0);

    return recursiveTripleStep(n, 0, *memo_vector);
}