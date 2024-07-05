#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(unsigned p1, short p2, unsigned p3, unsigned p4,
                    int p5_i, long p5_j, int p5_k) {
  p5_k;
w:
  goto w;
}

unsigned fn2(unsigned p1, int p_i, long p_j, int p_k) {
  int p5_i = p_i;
  long p5_j = p_j;
  int p5_k = p_k;
  fn1(0, 0, p1, 3, p5_i, p5_j, p5_k);
  for (;;) {
    struct h r;
    p_i = r.i;
    p_j = r.j;
    p_k = r.k;
  }
}

int main() {
  return 0;
}