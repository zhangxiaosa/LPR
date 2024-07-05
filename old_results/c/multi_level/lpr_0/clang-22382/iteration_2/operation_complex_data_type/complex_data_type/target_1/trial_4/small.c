#include <stdio.h>

typedef struct {
  int i;
  long j;
  unsigned k;
} original_data_type;

static unsigned fn1(unsigned p1, int p5_i, long p5_j, unsigned p5_k) {
  p5_k;
w:
  goto w;
}

unsigned fn2() {
  int p_i;
  long p_j;
  unsigned p_k;

  fn1(0, p_i, p_j, p_k);

  while (1) {
    original_data_type r;
    p_i = r.i;
    p_j = r.j;
    p_k = r.k;
  }
}

int main() {
  return 0;
}