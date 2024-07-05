#include <stdio.h>

struct h {
  short i;
  long j;
  unsigned k;
};

unsigned l;

unsigned fn2() {
  struct h p;
  struct h r;
  
  w:
  p.k;
  goto w;
}

int main() {
  fn2();
  return 0;
}
