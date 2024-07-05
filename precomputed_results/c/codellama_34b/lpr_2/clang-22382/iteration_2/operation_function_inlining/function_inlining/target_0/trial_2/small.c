
#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(int p1, int p2, struct h p3) {
  p3.k;
  goto w;
}

int fn2(p1) {
  struct h p;
  fn1(p1, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {
  fn2(10);
  return 0;
}
