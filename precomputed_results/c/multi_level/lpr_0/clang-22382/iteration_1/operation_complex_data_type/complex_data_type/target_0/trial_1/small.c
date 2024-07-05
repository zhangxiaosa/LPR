#include <stdlib.h>

struct original_data_type {
  int i;
  long j;
  unsigned k;
};

static struct original_data_type fn1(unsigned p1, short p2, int p3, long p4, unsigned p5) {
  p5;
w:
  goto w;
}

unsigned fn2() {
  int p1;
  short p2;
  int p3;
  long p4;
  unsigned p5;

  fn1(0, 0, p1, p2, p5);

  for (;;) {
    struct original_data_type r;
    int r_i = r.i;
    long r_j = r.j;
    unsigned r_k = r.k;

    int p_i = r_i;
    long p_j = r_j;
    unsigned p_k = r_k;

    p_i = p_i;
    p_j = p_j;
    p_k = p_k;
  }
}

int main() {}
