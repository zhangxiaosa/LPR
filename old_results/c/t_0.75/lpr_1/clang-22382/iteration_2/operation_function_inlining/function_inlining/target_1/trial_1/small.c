#include <stdio.h>

struct H {
  short i;
  long j;
  unsigned k;
};

unsigned fn2() {
  struct H p;
  p.k;
w:
  goto w;
  for (;;) {
    struct H r;
    p = r = p;
  }
}

int main() {}
