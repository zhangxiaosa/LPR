
#include <stdio.h>

int main() {
    struct c {
        int d : 18;
        int e;
        int h;
    };
    struct c i;
    struct c j;

    int n = j.h && i.d;
    int p = i.d | -(i.d && i.d) - n;
    i.d = p;

    return 0;
}
