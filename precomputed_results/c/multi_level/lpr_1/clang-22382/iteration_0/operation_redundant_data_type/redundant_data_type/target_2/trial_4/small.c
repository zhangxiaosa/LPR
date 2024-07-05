#include <stdio.h>

signed i;
long j;
unsigned k;

unsigned l;

static void fn1(unsigned p1, short p2, unsigned p3, unsigned p4) {
    k; // Removed struct access p5.k;
}

void fn2(unsigned p1) {
    signed p;
    int q;
    fn1(q, l, p1, 3);
    for (;;) {
        signed r;
        p = r;
    }
}

int main() { 
    return 0; 
}