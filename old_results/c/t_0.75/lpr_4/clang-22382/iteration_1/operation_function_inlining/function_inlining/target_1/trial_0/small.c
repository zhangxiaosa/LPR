#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

unsigned fn2() {
  struct h p;
  int q;

  // Inlined contents of fn1 function
  p.k;
w:
  goto w;

  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {
  // Call the optimized fn2 function
  fn2();

  return 0;
}
