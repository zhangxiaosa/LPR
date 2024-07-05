#include <stdio.h>

struct h {
  signed i;
  long j;
  unsigned k;
};

unsigned l;

struct h fn1(unsigned p1, short p2, unsigned p3, unsigned p4, struct h p5) {
  // Removed line: p5.k;
  // Removed label: w:;
  // Removed line: goto w;
}

int fn2(int p1) {
  struct h p;
  int q;
  fn1(q, l, p1, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
