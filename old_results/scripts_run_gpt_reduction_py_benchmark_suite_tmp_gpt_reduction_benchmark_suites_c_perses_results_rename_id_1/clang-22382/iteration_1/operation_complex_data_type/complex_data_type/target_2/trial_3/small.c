#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

static int fn1_i(struct h p5) {
  return p5.i;
}

static long fn1_j(struct h p5) {
  return p5.j;
}

static int fn1_k(struct h p5) {
  return p5.k;
}

unsigned fn2() {
  struct h p;
  fn1(p);
  for (;;) {
    struct h r;
    p.i = r.i = p.i;
    p.j = r.j = p.j;
    p.k = r.k = p.k;
  }
}

int main() {
  // Main function
  return 0;
}
