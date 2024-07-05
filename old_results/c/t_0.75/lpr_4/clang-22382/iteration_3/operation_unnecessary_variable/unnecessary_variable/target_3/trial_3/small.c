#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(struct h p5) {
  // No change in the function body
}

unsigned fn2() {
  struct h p;
  fn1(p);
  // No change in the function body
}

int main() {}
