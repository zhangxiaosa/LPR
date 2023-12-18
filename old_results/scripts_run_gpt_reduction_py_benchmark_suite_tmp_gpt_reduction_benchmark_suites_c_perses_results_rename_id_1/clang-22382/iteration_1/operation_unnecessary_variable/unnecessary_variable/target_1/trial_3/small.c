#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

static struct h fn1() {
  struct h p5;
  return p5;
}

unsigned fn2() {
  struct h p;
  fn1();
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
