#include <stdio.h>

struct h {
  signed int i;
  long int j;
  unsigned int k_prim;
};

unsigned int l;

static struct h fn1(unsigned int, short int, unsigned int, unsigned int, struct h);

unsigned int fn2(unsigned int p1) {
  struct h p_prim;
  int q;
  fn1(q, l, p1, 3, p_prim);
  for (;;) {
    struct h r;
    p_prim = r = p_prim;
  }
}

struct h fn1(unsigned int p1, short int p2, unsigned int p3, unsigned int p4, struct h p5) {

w:
  goto w;
}

int main() {}
