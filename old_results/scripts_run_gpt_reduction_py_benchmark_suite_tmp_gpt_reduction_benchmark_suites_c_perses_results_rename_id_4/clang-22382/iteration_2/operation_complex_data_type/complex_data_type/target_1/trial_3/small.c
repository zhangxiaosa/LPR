#include <stdlib.h>

struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(struct h p5) {
  p5.k;
  while (1) {
  }
}

unsigned fn2() {
  struct h p;
  fn1(p);
  while (1) {
    struct h r;
    p = r = p;
  }
}

int main() {
  int p5_i;    // Decomposed from p5.i
  long p5_j;   // Decomposed from p5.j
  int p5_k;    // Decomposed from p5.k

  return 0;
}