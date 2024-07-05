#include <stdio.h>

short fn1() {
    short n;
    short g;
    int j;
    unsigned k;

    n = g;
    j = 0x24F96B7B;
    k = 0;

    if (j != 0) {
        j = j - 1;
    }

    q:

    k = k >> 1;

    if (n != 0) {
        k = k << j;
        goto q;
    }
}

int main() {}
