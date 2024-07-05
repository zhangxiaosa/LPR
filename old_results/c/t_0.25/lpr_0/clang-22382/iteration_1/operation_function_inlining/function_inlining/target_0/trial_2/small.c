#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

unsigned fn2() {
  struct h p;
  // fn1(0, p);
  p.k;
w:
  goto w;
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {
  fn2();
  return 0;
}