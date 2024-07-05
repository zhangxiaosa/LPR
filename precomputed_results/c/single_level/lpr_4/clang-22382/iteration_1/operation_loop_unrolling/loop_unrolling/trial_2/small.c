#include <stdint.h>

struct h {
  signed i;
  long j;
  unsigned k;
};

uint32_t l;

static struct h fn1(unsigned, short, unsigned, uint32_t, struct h);

uint32_t fn2(p1) {
  struct h p;
  int q;
  fn1(q, l, p1, 3, p);
  struct h r1;
  p = r1 = p;
  struct h r2;
  p = r2 = p;
  struct h r3;
  p = r3 = p;
  struct h r4;
  p = r4 = p;
  struct h r5;
  p = r5 = p;
  struct h r6;
  p = r6 = p;
  struct h r7;
  p = r7 = p;
  struct h r8;
  p = r8 = p;
  struct h r9;
  p = r9 = p;
  struct h r10;
  p = r10 = p;
}

struct h fn1(unsigned p1, short p2, unsigned p3, uint32_t p4, struct h p5) {
  p5.k;
w:
  goto w;
}

int main() {}