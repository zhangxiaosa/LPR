#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(unsigned p1, struct h p5) {
  p5.k;
  w:
    goto w;
  return p5;
}

unsigned fn2() {
  struct h p;
  struct h r1;
  p = fn1(0, p);
  for (;;) {
    p = r1 = p;
  }
  return 0;
}

int main() {
  return 0;
}