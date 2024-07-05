#include <stdio.h>

struct h {
  signed i;
  long j;
  unsigned k;
};

unsigned l;

struct h fn1(unsigned f, short a, unsigned g, unsigned d, struct h);

unsigned fn2(unsigned p1) {
  struct h p;
  fn1(0, l, p1, 3, p);
  
  while (1) {
    struct h r;
    p = r;
  }
}

struct h fn1(unsigned p1, short p2, unsigned p3, unsigned p4, struct h p5) {
  return p5;
}

int main() {
  return 0;
}