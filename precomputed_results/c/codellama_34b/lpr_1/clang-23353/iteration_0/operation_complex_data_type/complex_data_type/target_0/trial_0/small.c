
#include <stdio.h>

int fn1(int p1, int p2) {
    return p1 * p2;
}

int j;

int main() {
    unsigned p1 = 10;
    int p2 = 20;
    char p3 = 'a';
    int i = 30;

    j = fn1(p1, p2);
    printf("j = %d\n", j);

    for (p3 = 6; p3 != -7; p3--) {
        j ^= fn1(p3, i) && 1L;
    }

    printf("j = %d\n", j);

    return 0;
}
