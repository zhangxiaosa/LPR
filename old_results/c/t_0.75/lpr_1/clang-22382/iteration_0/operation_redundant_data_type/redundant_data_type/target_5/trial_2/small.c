#include <stdio.h>

unsigned l;

static void fn1(unsigned, short, unsigned, unsigned, unsigned short, long, unsigned);

unsigned fn2(unsigned p1) {
  unsigned short p_i;
  long p_j;
  unsigned p_k;
  int q;
  fn1(q, l, p1, 3, p_i, p_j, p_k);
  for (;;) {
    unsigned short r_i;
    long r_j;
    unsigned r_k;
    unsigned short p_i;
    long p_j;
    unsigned p_k;
    p_i = r_i;
    p_j = r_j;
    p_k = r_k;
  }
}

static void fn1(unsigned p1, short p2, unsigned p3, unsigned p4, unsigned short p5_i, long p5_j, unsigned p5_k) {
w:
  goto w;
}

int main(void) {}
