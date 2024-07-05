#include <stdio.h>

unsigned int l;

struct h {
  signed int i;
  long int j;
  unsigned int k;
};

static struct h fn1(unsigned int p1, short int p2, unsigned int p3,
                    unsigned int p4, struct h p5) {
  p5.k;
w:
  goto w;
}

unsigned int fn2(int p1) {
  struct h p;
  int q;
  fn1(q, l, p1, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {
  return 0;
}
