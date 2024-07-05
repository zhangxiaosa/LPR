#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

unsigned fn2() {
  struct h p;
  unsigned p5_i = p.i;
w:
  goto w;
}

int main() {
  // Add your code here
  return 0;
}
