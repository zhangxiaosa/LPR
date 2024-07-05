
#include <stdio.h>

int main() {
    char p1, p2;
    int i;
    struct g j;

    p1 = 'a';
    p2 = 'b';
    i = 10;

    j.h = fn1(p1, p2) && 1L;

    printf("j.h = %d\n", j.h);

    return 0;
}

char fn1(char p1, char p2) {
    return p1 * p2;
}
