#include <iostream>

struct h {
  int i;
  long j;
  unsigned k;
};

unsigned l;

static int fn1(unsigned p1, int p2, long p3, unsigned p4) {
  w:
    goto w;
}

unsigned fn2() {
  int p1;
  long p2;
  unsigned p3;

  fn1(l, p1, p2, p3);

  for (;;) {
    int r1;
    long r2;
    unsigned r3;

    p1 = r1 = p1;
    p2 = r2 = p2;
    p3 = r3 = p3;
  }
}

int main() {}
