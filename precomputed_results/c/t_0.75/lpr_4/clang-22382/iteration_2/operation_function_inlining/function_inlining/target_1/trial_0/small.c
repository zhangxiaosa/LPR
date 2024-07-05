#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

unsigned fn2() {
  struct h p;
  p.k;
w:
  goto w;
}

int main() {
  fn2();
  return 0;
}
