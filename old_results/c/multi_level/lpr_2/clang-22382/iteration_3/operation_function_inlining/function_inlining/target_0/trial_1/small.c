#include <stdio.h>

struct h {
  int i;
  long j;
  unsigned k;
};

unsigned fn2() {
  struct h p;
  // Inlined fn1 code
  // p5.k;
w:
  goto w;
  // End of inlined fn1 code
  for (;;) {
    struct h r1;
    p = r1 = p;
  }
}

int main() {}
