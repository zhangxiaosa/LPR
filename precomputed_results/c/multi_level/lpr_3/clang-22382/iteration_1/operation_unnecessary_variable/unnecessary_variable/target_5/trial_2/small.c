#include <stdio.h>

struct h {
  int i;
  long j;
  unsigned k;
};

static struct h fn1(void) {
  unsigned p5_k;
w:
  goto w;
}

int fn2() {
  struct h p;
  fn1();
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
