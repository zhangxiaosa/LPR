#include <stdio.h>

struct h {
  int i;
  long j;
  unsigned k;
};

static struct h fn1(struct h p5) {
  // No code related to p5_k
w:
  goto w;
}

int fn2() {
  struct h p;
  fn1(p);
  for (;;) {
    p = p;
  }
}

int main() {
  // No code related to p5_k
}
