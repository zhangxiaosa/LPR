#include <stdio.h>

void fn1(unsigned p1, int p2) {
    printf("checksum = %X\n", p1);
}

short o;
char p;

int main() {
    short q;
    int i;
    short r = o;
    q = r;

    for (i = 0; i < 10; i++) {
        while (q > 1) {
           q -= 1;
        }
    }

    if (p = q) {
        ;
    }
  
    int t = 0;
    fn1(p, t);
    return 0;
}