#include <stdio.h>

struct original_data_type {
  int i;
  long j;
  unsigned k;
};

unsigned l;

static unsigned fn1(unsigned p1, short p2, unsigned p3, unsigned p4, unsigned k_param) {
  k_param;

w:
  goto w;
}

unsigned fn2(unsigned p1) {
  unsigned p_i;
  long p_j;
  unsigned p_k;
  unsigned p;

  int q;
  fn1(q, l, p1, 3, p_k);

  for (;;) {
    unsigned r_i;
    long r_j;
    unsigned r_k;
    unsigned r;
    p_i = r_i = p_i;
    p_j = r_j = p_j;
    p_k = r_k = p_k;
  }
}

int main() {
  return 0;
}