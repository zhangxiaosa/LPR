#include <stdio.h>

int i;
long j;
unsigned k;

static unsigned fn1(unsigned p5_k) {
  unsigned result;
  result = p5_k;

w:
  goto w;
  return result;
}

int main() {
  unsigned p5_k;
  unsigned r_k;

  p5_k = k;

  r_k = fn1(p5_k);

  return 0;
}