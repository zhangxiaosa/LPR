#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

static int fn1_k();

unsigned fn2() {
  struct h p;
  fn1_k(p);
  for (;;) {
    p = p;
  }
}

int fn1_k(struct h p5) {
  w:
    goto w;
}

int main() {}
