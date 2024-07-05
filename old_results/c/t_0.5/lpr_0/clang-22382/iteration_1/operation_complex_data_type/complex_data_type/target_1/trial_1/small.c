#include <stdio.h>

struct h {
  signed int i;
  long int j;
  unsigned int k;
};

unsigned int l;

static struct h fn1(unsigned int, short int, struct h);

unsigned int fn2(int p1) {
  struct h p;
  int q;
  fn1(q, l, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

struct h fn1(unsigned int p1, short int p2, struct h p5) {
  p5.k;
  w:
  goto w;
}

int main() {
  return 0;
}