
#include <stdio.h>

typedef char b;
int d;
int e;

b fn1() {
    int h = 6L;
    if (e)
        goto i;
    fn1();
    b j;
    return j;
i:
    d = h;
    fn1();
    j = 0xEEACFBBFL;
    return j;
}

int main() {
    int h = 6L;
    int d = 0;
    int e = 0;
    b j = 0;

    if (e)
        goto i;
    fn1();
    j = 0xEEACFBBFL;
    return j;
i:
    d = h;
    fn1();
    j = 0xEEACFBBFL;
    return j;
}
