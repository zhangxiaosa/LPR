#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(struct h p5) {
  // Empty body, no effect
}

unsigned fn2() {
  struct h p;
  for (;;) {
    struct h r;
    p = r;
  }
}

int main() {}
