#include <iostream>

typedef int b;

char fn1(char p1, char p2) {
    return p1 * p2;
}

signed j_h;
b i;

int main() {
    char p3;

    // Iteration 1
    p3 = 6;
    j_h ^= fn1(p3, i) && 1L;

    // Iteration 2
    p3--;
    j_h ^= fn1(p3, i) && 1L;

    // Iteration 3
    p3--;
    j_h ^= fn1(p3, i) && 1L;

    // ... Repeat 11 more times ...

    // Iteration 14
    p3--;
    j_h ^= fn1(p3, i) && 1L;

    return 0;
}