#include <stdio.h>

struct h {
  int i;
  long j;
  unsigned k;
};

static struct h fn1(struct h p5) {
  // Constant propagation removes variable 'p5_k'
  // 'p5.k' is no longer assigned to 'p5_k'
  // Infinite loop remains as is
  w:
    goto w;
}

int fn2() {
  struct h p;
  fn1(p);
  for (;;) {
    struct h r;
    // Copy propagation doesn't involve 'p5_k'
    p = r = p;
  }
}

int main() {}
