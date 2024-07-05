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

  // Unrolled loop
  struct h r1;
  p = r1 = p;

  struct h r2;
  p = r2 = p;

  struct h r3;
  p = r3 = p;

  struct h r4;
  p = r4 = p;

  // ... Add more unrolled iterations as needed

}

struct h fn1(unsigned p1, short p2, unsigned p3, uint32_t p4, struct h p5) {
  p5.k;
w:
  goto w;
}

int main() {}
