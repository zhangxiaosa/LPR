#include <stdio.h>

struct h {
  int i;
  long j;
  unsigned k;
};

static struct h fn1(void) {
  /* p5 is unused, optimize it out */
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
