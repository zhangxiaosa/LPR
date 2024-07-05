#include <stdio.h>

int l; // unsigned -> int

struct h {
  int i; // signed -> int
  long j;
  unsigned k; // unsigned -> int
};

static struct h fn1(unsigned int p1, short p2, unsigned int p3, unsigned int p4,
                    struct h p5) {
  unsigned int p5_k = p5.k;
w:
  goto w;
}

int fn2(int p1) { // unsigned -> int
  struct h p;
  int q;
  fn1(q, l, p1, 3, p);

  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() { return 0; }