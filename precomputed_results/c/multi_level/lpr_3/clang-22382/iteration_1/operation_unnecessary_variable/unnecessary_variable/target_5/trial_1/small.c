#include <stdio.h>

struct h {
  int i;
  long j;
  unsigned k;
};

static struct h fn1() {
  unsigned p5_k;
w:
  goto w;
}

int fn2() {
  struct h p;
  // fn1(p);
  for (;;) {
    p;
  }
}