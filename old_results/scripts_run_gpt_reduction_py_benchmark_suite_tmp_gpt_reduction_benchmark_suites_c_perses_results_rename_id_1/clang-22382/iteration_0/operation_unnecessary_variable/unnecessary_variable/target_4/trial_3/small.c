#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(struct h p5) {
  // No usage of p5 variable
w:
  goto w;
}

unsigned fn2() {
  struct h p;
  // Call to fn1 without using its return value
  fn1(p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
