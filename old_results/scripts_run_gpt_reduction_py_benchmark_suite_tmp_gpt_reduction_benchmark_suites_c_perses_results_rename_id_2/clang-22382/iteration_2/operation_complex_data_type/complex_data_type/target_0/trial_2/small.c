#include <stdio.h>

struct h {
  int i;
  long j;
  unsigned k;
};

unsigned l;

static struct h fn1(unsigned p1, struct h p5) {
  int p5i = p5.i;
  long p5j = p5.j;
  unsigned p5k = p5.k;

w:
  goto w;
}

unsigned fn2() {
  struct h p;
  fn1(l, p);

  for (;;) {
    struct h r1;
    int r1i = r1.i;
    long r1j = r1.j;
    unsigned r1k = r1.k;
    p = r1 = p;
  }
}

int main() {
}
