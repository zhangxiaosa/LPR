#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

unsigned l;

int fn2(p1) {
  struct h p;
  int q;

  // Inlined code of fn1
  p.k;
  w:
    goto w;

  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {
  // Call to fn2
  fn2();
}
