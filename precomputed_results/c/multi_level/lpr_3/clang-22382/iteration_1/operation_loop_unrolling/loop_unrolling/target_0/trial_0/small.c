#include <iostream>

struct h {
  int i;
  long j;
  unsigned k;
};

static struct h fn1(struct h p5) {
  unsigned p5_k = p5.k;

w:
  goto w;
}

int fn2() {
  struct h p;
  fn1(p);

  struct h r1;
  p = r1 = p;

  struct h r2;
  p = r2 = p;

  struct h r3;
  p = r3 = p;
  
  return 0;
}

int main() {
  fn2();
  return 0;
}