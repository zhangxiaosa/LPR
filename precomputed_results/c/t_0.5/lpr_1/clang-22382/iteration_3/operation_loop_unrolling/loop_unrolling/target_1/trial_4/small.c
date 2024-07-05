#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

static int fn1_k();
unsigned fn2() {
  struct h p;
  fn1_k(p);

  struct h r;
  p = r = p;

  return 0;  // Added a return statement to avoid warning about non-void function
}

int fn1_k(struct h p5) {
  p5.k;

  return 0;  // Added a return statement to avoid warning about non-void function
}

int main() {
  return 0;
}
