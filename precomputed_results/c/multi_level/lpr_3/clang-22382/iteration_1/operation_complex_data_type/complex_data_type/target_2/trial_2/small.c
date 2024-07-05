#include <stdio.h>

struct h {
  int i;
  long j;
  unsigned k;
};

static unsigned fn1_k(struct h p5) {
  unsigned p5_k = p5.k;
  return p5_k;
}

int fn2() {
  struct h p;
  unsigned p_k;
  p_k = fn1_k(p);
  for (;;) {
    struct h r;
    struct h p;
    int r_i;
    long r_j;
    unsigned r_k;
    int p_i;
    long p_j;
    unsigned p_k;
    r_i = r.i;
    r_j = r.j;
    r_k = r.k;
    p_i = r_i;
    p_j = r_j;
    p_k = r_k;
  }
}

int main() {
  return 0;
}
