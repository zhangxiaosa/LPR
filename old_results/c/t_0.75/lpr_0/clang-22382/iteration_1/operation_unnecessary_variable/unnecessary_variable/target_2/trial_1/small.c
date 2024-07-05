#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

unsigned l;

static struct h fn1(unsigned p1, short p2, struct h p5) {
  p5;
w:
  goto w;
}

unsigned fn2() {
  struct h p;
  int q;
  for (;;) {
    struct h r;
    p = r;
  }
}

int main() {}
