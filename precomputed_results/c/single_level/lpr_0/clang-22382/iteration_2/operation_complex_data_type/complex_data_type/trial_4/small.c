#include <iostream>

struct hjson {
  signed i;
  long j;
  unsigned k;
};

unsigned l;
static signed hjson_i;
static long hjson_j;
static unsigned hjson_k;

unsigned fn1(unsigned, short, unsigned, unsigned, signed, long, unsigned);

unsigned fn2(p1) {
  signed p_i;
  long p_j;
  unsigned p_k;
  int q;
  fn1(q, l, p1, 3, p_i, p_j, p_k);
  signed r1_i;
  long r1_j;
  unsigned r1_k;
  for (;;) p_i = r1_i = p_i;
}

unsigned fn1(unsigned p1, short p2, unsigned p3, unsigned p4, signed p5_i, long p5_j, unsigned p5_k) {
  p5_k;
  w:
    goto w;
}

int main() {}
