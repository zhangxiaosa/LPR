
#include <stdio.h>

struct c {
    int d : 18;
    int f;
};

void main() {
    struct c i;
    int j;
    struct c l = {24, 6738};

    j = l.d;
    int n = j && l.d;
    i.d = l.d | -(l.f && l.d) - n;

    printf("%d", i.d);
}
