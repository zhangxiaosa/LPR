#include <stdio.h>

struct h {
  short i;
  long j;
  unsigned k;
};

unsigned l;

static struct h fn1(struct h p5);

unsigned fn2() {
  struct h p;
  int q;
  fn1(p);
  struct h r;
  p = r = p;
}

static struct h fn1(struct h p5) {
  p5.k;
}

int main() {}
