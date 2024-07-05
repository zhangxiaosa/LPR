#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

struct h fn1() {
  struct h p;
  unsigned p_i = p.i;

w:
  goto w;
}

unsigned fn2() {
  struct h p = fn1();

  for (;;) {
    struct h r;
    p = r = p;
  }
}
