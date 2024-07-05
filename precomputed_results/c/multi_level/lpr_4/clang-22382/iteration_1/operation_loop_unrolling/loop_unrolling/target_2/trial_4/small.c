#include <stdio.h>

struct h {
  signed i;
  long j;
  unsigned k;
};

static struct h fn1(unsigned p3, struct h p5) {
  p5.k;
}

unsigned fn2() {
  struct h p;
  struct h r;
  p = r;

  for (;;) {
    p = r;
  }
}

int main() {
  return 0;
}
