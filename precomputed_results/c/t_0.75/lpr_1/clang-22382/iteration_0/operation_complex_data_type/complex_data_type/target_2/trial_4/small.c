#include <stdio.h>

struct h {
  short i;
  long j;
  unsigned k;
};

short h_i;
long h_j;
unsigned h_k;
unsigned l;

static struct h fn1(unsigned, short, unsigned, unsigned, struct h);

unsigned fn2(unsigned p1) {
  struct h p;
  int q;
  fn1(q, l, p1, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

struct h fn1(unsigned p1, short p2, unsigned p3, unsigned p4, struct h p5) {
  short p5_i = p5.i;
  long p5_j = p5.j;
  unsigned p5_k = p5.k;
w:;
  goto w;
}

int main() {}
