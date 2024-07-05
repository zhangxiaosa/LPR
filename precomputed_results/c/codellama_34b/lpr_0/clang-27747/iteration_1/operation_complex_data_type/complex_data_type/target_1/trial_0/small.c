
#include <stdio.h>

int main() {
    int d = 18;
    int f;
    int j;
    struct c {
        int d : 18;
        int f;
    };
    struct c i;
    i.d = d;
    i.f = f;
    int n = j && i.d;
    i.d = i.d | -(i.f && i.d) - n;
}
