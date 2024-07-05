#include <iostream>

struct h {
  short i;
  long j;
  unsigned k;
};

unsigned l;

unsigned fn2() {
  struct h p;
  int q;
  p.k; // Inlined code from fn1
w:;
  goto w;
}

int main() {
  fn2();
  return 0;
}
