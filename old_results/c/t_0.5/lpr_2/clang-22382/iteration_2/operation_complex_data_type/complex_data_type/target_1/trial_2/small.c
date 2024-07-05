#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

static int fn1(int p5_i);

unsigned fn2() {
  struct h p;
  fn1(p.i);
  for (;;) {
    struct h r;
    p.i = r.i = p.i;
  }
}

int fn1(int p5_i) {
  w:
    goto w;
}

int main() { return 0; }