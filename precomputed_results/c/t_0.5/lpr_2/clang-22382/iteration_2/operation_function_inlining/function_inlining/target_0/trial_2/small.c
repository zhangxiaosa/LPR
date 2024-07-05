#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

unsigned fn2() {
  struct h p;
  // Inlined code of fn1
  unsigned p5_i = p.i;
w:
  goto w;
  // End of inlined code
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {
  return 0;
}
