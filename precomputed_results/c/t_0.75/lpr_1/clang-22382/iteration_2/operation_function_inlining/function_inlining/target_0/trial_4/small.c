#include <stdio.h>

struct H {
  short i;
  long j;
  unsigned k;
};

unsigned fn2() {
  struct H p;
  // Code of fn1
  p.k;
w:
  goto w;
  // End of fn1 code
  for (;;) {
    struct H r;
    p = r = p;
  }
}

int main() {
  return 0;
}