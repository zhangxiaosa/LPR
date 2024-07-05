#include <stdio.h>

int main() {
    short q;
    q = 0;
    int s = 1L;

    while (q > s) {
        q -= 1;
    }

    while (q > s) {
        q -= 1;
    }

    while (q > s) {
        q -= 1;
    }

    while (q > s) {
        q -= 1;
    }

    while (q > s) {
        q -= 1;
    }

    while (q > s) {
        q -= 1;
    }

    putchar('c');
    putchar('h');
    putchar('e');
    putchar('c');
    putchar('k');
    putchar('s');
    putchar('u');
    putchar('m');
    putchar(' ');
    putchar('=');
    putchar(' ');
    putchar('0');
    putchar('x');
    if (q < 0)
        putchar('0');
    if (q == 0)
        putchar('0');
    for (; q != 0; q >>= 4) {
        char digit = q & 0xF;
        if (digit < 10)
            putchar('0' + digit);
        else
            putchar('A' + digit - 10);
    }

    putchar('\n');
    return 0;
}