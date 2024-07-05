

#include <stdio.h>

int main() {
    int d = 18;
    int f;

    struct c {
        int d : 18;
        int f;
    };
    struct c i;

    int j;

    i.d = d;
    i.f = f;

    int k = j && i.d;
    int l = i.d | -(i.f && i.d) - k;

    printf("i.d: %d\ni.f: %d\n", i.d, i.f);
    printf("j: %d\n", j);
    printf("k: %d\n", k);
    printf("l: %d\n", l);

    return 0;
}
