#include <iostream>

typedef int a;
a g;

int main() {
    a i;
    unsigned k;
    int j = 0x24F96B7B;

    --j;  // First iteration
    --j;  // Second iteration
    --j;  // Third iteration
    // Repeat until j becomes zero

  q:
    k = k >> 1;
    i = g;
    if (i) {
        k = k << j;
        goto q;
    }
}
