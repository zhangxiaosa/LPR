#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

static struct h fn1();

unsigned fn2() {
  struct h p;
  fn1(p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

struct h fn1(struct h p5) {
  int p5_i = p5.i;
w:
  goto w;
}

int main() { return 0; }
