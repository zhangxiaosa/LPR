#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(unsigned p1, struct h p5) {
  int p5_i = p5.i;
w:
  goto w;
}

unsigned fn2() {
  struct h p;
  struct h r;
  fn1(0, p);
  
  // Unrolled loop
  p = r = p;
  p = r = p;
  p = r = p;
  // Repeat the above line as many times as needed
  
  return 0;
}

int main() {
  fn2();
  return 0;
}
