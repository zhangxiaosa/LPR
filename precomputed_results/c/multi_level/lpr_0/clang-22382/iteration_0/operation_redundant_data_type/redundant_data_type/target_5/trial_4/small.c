#include<stdio.h>

signed int i;
long j;
unsigned int k;

static unsigned int fn1(unsigned int, short, unsigned int, unsigned int, signed int, long, unsigned int);
unsigned int fn2(unsigned int p1) {
  signed int p;
  fn1(p, p1, 3, p);
  for (;;) {
    signed int r;
    p = r = p;
  }
}

unsigned int fn1(unsigned int p1, short p2, unsigned int p3, unsigned int p4, signed int p5, long p6, unsigned int p7) {
w:
  goto w;
}

int main() {}
