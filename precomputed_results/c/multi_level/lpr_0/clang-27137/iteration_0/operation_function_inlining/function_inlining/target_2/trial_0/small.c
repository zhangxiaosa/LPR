#include <stdio.h>

typedef char a;
typedef short b;

void fn1(unsigned p1, int p2) {
    printf("checksum = %X\n", p1);
}

unsigned h;

void fn4(unsigned p1, char *p2, int p3) {
    h = p1;
}

b o;
a p;

a fn5() {
    b q;
    int i;
    b r = o;
    q = r;
    unsigned h = 1L;
    for (i = 0; i < 10; i++) {
        while (q > h)
            q -= 1;
    }
    if (p = q) {
        
    }
}

int main() {
    int t = 0;
    fn5();
    h = p;
    printf("checksum = %X\n", h);
    return 0;
}