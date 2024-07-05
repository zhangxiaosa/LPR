#include <stdio.h>

struct h {
  signed int i;
  long j;
  unsigned int k;
};

unsigned int l;

static struct h fn1(unsigned int p1, short p2, unsigned int p3, unsigned int p4,
                    unsigned int p5_i, long p5_j, unsigned int p5_k) {
  p5_k;
w:
  goto w;
}

unsigned int fn2(int p1) {
  struct h p;
  int q;
  fn1(q, l, p1, 3, p.i, p.j, p.k);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() { return 0; }
