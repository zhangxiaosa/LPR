#include <stdio.h>

unsigned l;

static struct h {
  signed i;
  long j;
  unsigned k;
};

static struct h fn1(unsigned p1, short p2, unsigned p3, unsigned p4, signed p5_i, long p5_j, unsigned p5_k) {
  p5_k;
w:
  goto w;
}

unsigned fn2(p1) {
  signed p5_i;
  long p5_j;
  unsigned p5_k;
  
  struct h p;
  int q;
  
  fn1(q, l, p1, 3, p5_i, p5_j, p5_k);
  
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {
  return 0;
}