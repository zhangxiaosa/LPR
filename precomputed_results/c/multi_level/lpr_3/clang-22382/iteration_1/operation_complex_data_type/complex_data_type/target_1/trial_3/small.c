#include <stdio.h>

struct h {
  int i;
  long j;
  unsigned k;
};

static struct h fn1(struct h p5) {
  int p5_i = p5.i;
  long p5_j = p5.j;
  unsigned p5_k = p5.k;

w:
  goto w;
}

int fn2() {
  struct h p;
  fn1(p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
