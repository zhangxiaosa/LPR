#include <stdio.h>

struct h {
  short i;
  long j;
  unsigned k;
};

unsigned l;

unsigned fn2() {
  struct h p;
  int q;
  
  // Inlined code from fn1
  p.k;
w:;
  goto w;
}

int main() {
  fn2();
  
  return 0;
}
