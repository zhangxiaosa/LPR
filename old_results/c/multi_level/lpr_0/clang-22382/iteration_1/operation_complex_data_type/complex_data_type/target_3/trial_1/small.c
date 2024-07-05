#include <stdio.h>

int p_i;
long p_j;
unsigned p_k;

struct original_data_type {
  int i;
  long j;
  unsigned k;
};

static int fn1(unsigned p1, short p2, int p5_i, long p5_j, unsigned p5_k) {
  p5_k;
 w:
  goto w;
}

unsigned fn2() {
  int p_i;
  long p_j;
  unsigned p_k;

  struct original_data_type {
    int i;
    long j;
    unsigned k;
  } p;

  fn1(0, 0, p.i, p.j, p.k);

  for (;;) {
    struct original_data_type r;
    p.i = r.i = p.i;
    p.j = r.j = p.j;
    p.k = r.k = p.k;
  }
}

int main() {
}
