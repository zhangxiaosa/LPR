#include <stdio.h>

struct h {
  short i;
  long j;
  unsigned k;
};

unsigned l;
static short h_i;
static long h_j;
static unsigned h_k;

static unsigned fn1(unsigned p1, short p2, short p3, long p4, unsigned p5_i, unsigned p5_j, unsigned p5_k);

unsigned fn2() {
  short p_i;
  long p_j;
  unsigned p_k;
  int q;
  fn1(q, l, p_i, p_j, h_i, h_j, h_k);
  for (;;) {
    short r_i;
    long r_j;
    unsigned r_k;
    p_i = r_i = p_i;
    p_j = r_j = p_j;
    p_k = r_k = p_k;
  }
}

unsigned fn1(unsigned p1, short p2, short p3, long p4, unsigned p5_i, unsigned p5_j, unsigned p5_k) {
w:;
  goto w;
}

int main() {
  return 0;
}
