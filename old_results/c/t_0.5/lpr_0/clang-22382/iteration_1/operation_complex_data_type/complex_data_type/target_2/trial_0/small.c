#include <stdio.h>

int l;

struct h {
  signed int i;
  long j;
  unsigned int k;
};

struct h fn1(unsigned int p1, short int p2, struct h p5);

struct h fn1(unsigned int p1, short int p2, struct h p5) {
  p5.k;
  w:
  goto w;
}

int fn2() {
  struct h p;
  int q;
  fn1(q, l, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {
  return 0;
}