#include <stdint.h>

struct h {
  signed i;
  long j;
  unsigned k;
};

static struct h fn1();
uint32_t fn2(p1) {
  struct h p;
  int q;
  fn1(q, p1, 3, p);
  struct h r;
  p = r = p;
  p = r = p;
  p = r = p;
  p = r = p;
  // Repeat the body of the loop as needed.
  // Modify the values of p and r accordingly.
}

struct h fn1(unsigned p1, unsigned p3, uint32_t p4, struct h p5) {
  p5.k;
w:
  goto w;
}

int main() {}
