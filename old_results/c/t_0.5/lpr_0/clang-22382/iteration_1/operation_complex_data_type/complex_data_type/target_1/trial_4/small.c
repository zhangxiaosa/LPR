#include <stdio.h>

struct h {
  signed i;
  long j;
  unsigned k;
};

unsigned l;

static struct h fn1(unsigned p1, short p2, signed p3, long p4, unsigned p5) {
  w:
    goto w;
}

unsigned fn2(int p1) {
  signed p2;
  long p3;
  unsigned p4;
  unsigned p5;
  fn1(p1, p2, p3, p4, p5);
  for (;;) {
    signed r_i;
    long r_j;
    unsigned r_k;
    signed p_i;
    long p_j;
    unsigned p_k;
    p_i = r_i;
    p_j = r_j;
    p_k = r_k;
  }
}

int main() {}
