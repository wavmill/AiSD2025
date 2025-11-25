#include "backtrack.hpp"

int main() {
    int a[MAXN] = {0};

    Data input;
    input.n = 3;          
    input.values[0] = 1;
    input.values[1] = 2;
    input.values[2] = 3;

    backtrack(a, 0, input);

    return 0;
}