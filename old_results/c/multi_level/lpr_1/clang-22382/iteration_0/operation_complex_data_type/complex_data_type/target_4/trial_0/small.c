#include <stdio.h>

unsigned int l;

struct h {
  signed int i;
  long int j;
  unsigned int k;
};

static struct h fn1(unsigned int p1, short int p2, unsigned int p3,
                    unsigned int p4, struct h p5) {
  return p5;
}

unsigned int fn2(int p1) {
  int q;
  fn1(q, l, p1, 3, {});
  for (;;) {
    struct h r;
  }
}

int main() {
  return 0;
}