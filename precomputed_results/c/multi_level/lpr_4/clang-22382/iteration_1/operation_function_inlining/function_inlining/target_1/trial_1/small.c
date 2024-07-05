#include <stdio.h>

struct h {
  signed i;
  long j;
  unsigned k;
};

unsigned fn2() {
  struct h p;
  int q;

  // Inlined code from fn1
  p.k;
  // Remove p5 and p3 variables

  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {
  fn2();
  return 0;
}
