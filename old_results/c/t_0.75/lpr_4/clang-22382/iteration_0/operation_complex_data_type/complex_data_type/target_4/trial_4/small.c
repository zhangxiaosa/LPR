#include <stdio.h>

unsigned int l;

struct h {
  signed int i;
  long int j;
  unsigned int k;
};

static struct h fn1(unsigned int, short int, unsigned int, unsigned int, signed int, long int, unsigned int);

unsigned int fn2(unsigned int p1) {
  signed int p5_i;
  long int p5_j;
  unsigned int p5_k;
  struct h p;
  int q;
  fn1(q, l, p1, 3, p5_i, p5_j, p5_k);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

struct h fn1(unsigned int p1, short int p2, unsigned int p3, unsigned int p4,
             signed int p5_i, long int p5_j, unsigned int p5_k) {
  p5_k;

w:
  goto w;
}

int main() {}
