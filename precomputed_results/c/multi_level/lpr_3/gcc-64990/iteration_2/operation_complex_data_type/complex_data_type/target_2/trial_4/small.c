#include <stdio.h>

static short g = 0x7EBA;
static unsigned l;

unsigned fn1(int p1, int p2);
int fn2(int);
unsigned fn3();

int main() {
    fn3();
    return 0;
}

unsigned fn1(int p1, int p2) {
    return 2;
}

int fn2(int p1) {
    return 0x709BFC8A;
}

unsigned fn3() {
    fn1(fn2(0), 7);
    return 0;
}