#include <stdio.h>

struct h {
  signed int i;
  long int j;
  unsigned int k;
};

static struct h fn1(unsigned int p1, unsigned int p3, unsigned int p4, struct h p5) {
  p5.k;
}

unsigned int fn2() {
  struct h p;
  struct h r;
  fn1(3, 0, 0, p);
  for (;;) {
    p = r;
  }
}

int main() {
  return 0;
}
