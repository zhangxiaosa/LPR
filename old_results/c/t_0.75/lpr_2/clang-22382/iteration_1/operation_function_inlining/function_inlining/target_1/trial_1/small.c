#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

unsigned l;

unsigned fn2(unsigned p1) {
  struct h p;
  // Inlined body of fn1
  p.k;
w:
  goto w;
}

int main() {
  return 0;
}
