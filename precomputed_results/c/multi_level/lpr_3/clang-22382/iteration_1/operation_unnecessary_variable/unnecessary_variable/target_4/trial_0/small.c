#include <stdio.h>

struct h {
  int i;
  long j;
  unsigned k;
};

static struct h fn1(struct h p5) {
  goto w;
}

int fn2() {
  struct h p;
  fn1(p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
