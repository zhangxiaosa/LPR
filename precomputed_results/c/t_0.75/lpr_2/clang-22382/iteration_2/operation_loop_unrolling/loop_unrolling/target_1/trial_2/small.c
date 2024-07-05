#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(unsigned p1, short p2, unsigned p3, unsigned p4,
                    struct h p5) {
  p5.k;
w:
  goto w;
}

unsigned fn2(unsigned p1) {
  struct h p;
  fn1(0, 0, p1, 3, p);

  struct h r1;
  struct h r2;
  struct h r3;
  struct h p1 = p;
  struct h p2 = p;
  struct h p3 = p;

  for (;;) {
    p1 = r1 = p1;
    p2 = r2 = p2;
    p3 = r3 = p3;

    p1 = r1 = p1;
    p2 = r2 = p2;
    p3 = r3 = p3;

    p1 = r1 = p1;
    p2 = r2 = p2;
    p3 = r3 = p3;
  }
}

int main() {
  unsigned p1 = 5;
  fn2(p1);

  return 0;
}