#include <stdlib.h>

struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(struct h p5) {
  int p5_i = p5.i;
  long p5_j = p5.j;
  int p5_k = p5.k;
  p5_k;
  while (1) {
  }
}

unsigned fn2() {
  struct h p;
  int p_i = p.i;
  long p_j = p.j;
  int p_k = p.k;
  fn1(p);
  while (1) {
    struct h r;
    int r_i = r.i;
    long r_j = r.j;
    int r_k = r.k;
    p_i = r_i = p_i;
    p_j = r_j = p_j;
    p_k = r_k = p_k;
  }
}

int main() {
  return 0;
}
