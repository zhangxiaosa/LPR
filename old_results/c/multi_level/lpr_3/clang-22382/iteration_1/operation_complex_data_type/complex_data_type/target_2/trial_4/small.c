#include <stdio.h>

struct h {
  int i;
  long j;
  unsigned k;
};

static unsigned int fn1_k(struct h p5) {
  unsigned int p5_k = p5.k;

  w:
    goto w;
}

int fn2() {
  struct h p;
  fn1_k(p);

  for (;;) {
    struct h r;
    p.i = r.i = p.i;
    p.j = r.j = p.j;
    p.k = r.k = p.k;
  }

  return 0;
}

int main() {
  return 0;
}