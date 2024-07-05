
#include <stdio.h>

struct c {
    int d;
    int e;
    int g;
    int h;
};

int main() {
    struct c i;
    struct c j;

    int m = j.e;
    int n = j.h && i.d;
    int p = i.d | -(i.g && i.d) - n;
    i.g = p;

    return 0;
}
