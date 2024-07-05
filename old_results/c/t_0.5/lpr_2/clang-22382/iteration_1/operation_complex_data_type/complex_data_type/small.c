#include <stdio.h>

struct h {
  signed int i;
  long int j;
  unsigned int k;
};

unsigned int l;

static struct h fn1();

unsigned int fn2(unsigned int p1) {
  struct h p;
  fn1(l, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

struct h fn1(unsigned int p1, struct h p5) {
  unsigned int p5_i = p5.i;
  long int p5_j = p5.j;
  unsigned int p5_k = p5.k;

w:
  goto w;
}

int main() {}
