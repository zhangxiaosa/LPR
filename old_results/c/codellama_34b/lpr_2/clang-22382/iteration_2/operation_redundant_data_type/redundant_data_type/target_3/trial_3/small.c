
#include <stdio.h>

static struct h fn1(long p1, long p4, struct h p5) {
  p5.k;
w:;
  goto w;
}

long fn2(long p1) {
  struct h p;
  fn1(p1, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {
  return 0;
}
