#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(struct h p5) {
  // No code in the body of fn1
  // p5.k; statement removed
  // No return statement needed as it is unreachable
}

unsigned fn2() {
  struct h p;
  // fn1(p) call removed
  for (;;) {
    struct h r;
    // Copy propagation: p = r; statement removed
  }
}

int main() {
  return 0;
}
