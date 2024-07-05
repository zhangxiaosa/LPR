#include <stdio.h>

signed int i;
long int j;
unsigned int k;

unsigned int l;

static void fn1(unsigned int, short int, unsigned int, unsigned int,
                signed int, long int, unsigned int);

unsigned int fn2(unsigned int p1) {
  signed int i;
  long int j;
  unsigned int k;
  unsigned int p;
  int q;
  fn1(q, l, p1, 3, i, j, k);
  for (;;) {
    signed int r;
    long int s;
    unsigned int t;
    p = r = p;
  }
}

void fn1(unsigned int p1, short int p2, unsigned int p3, unsigned int p4,
         signed int p5, long int p6, unsigned int p7) {
  p7;

w:
  goto w;
}

int main() {}
