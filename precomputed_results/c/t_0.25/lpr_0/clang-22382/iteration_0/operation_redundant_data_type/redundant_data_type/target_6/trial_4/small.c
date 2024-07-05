#include <stdio.h>

signed i;
long j;
unsigned k;

unsigned l;

unsigned fn1(unsigned, short, unsigned, unsigned);
unsigned fn2(unsigned p1) {
  signed i;
  long j;
  unsigned k;
  int q;
  fn1(q, l, p1, 3);
  for (;;) {
    signed i;
    long j;
    unsigned k;
    i = j = i;
  }
}

unsigned fn1(unsigned p1, short p2, unsigned p3, unsigned p4) {
w:;
  goto w;
}

int main() {}
