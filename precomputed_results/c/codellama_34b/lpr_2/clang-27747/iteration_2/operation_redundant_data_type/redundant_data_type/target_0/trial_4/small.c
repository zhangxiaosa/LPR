
#include <stdio.h>

int main() {
    struct c {
        int d;
        int h;
    } i, j;

    j.d = 10;
    i.h = 5;

    int p = i.h | -(i.h && i.h) - j.d;
    i.d = p;

    printf("i.d = %d\n", i.d);

    return 0;
}
