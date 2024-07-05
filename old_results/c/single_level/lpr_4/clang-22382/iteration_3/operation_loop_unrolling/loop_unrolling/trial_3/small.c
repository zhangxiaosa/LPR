#include <stdint.h>

struct h {
  signed i;
  long j;
  unsigned k;
};

static struct h fn1();
uint32_t fn2() {
  struct h p;
  fn1(p);
  struct h r1;
  p = r1 = p;
  struct h r2;
  p = r2 = p;
  struct h r3;
  p = r3 = p;
  ... (unrolled loop body repeated multiple times) ...
  struct h rN;
  p = rN = p;
}

struct h fn1(struct h p5) {
  p5.k;
w:
  goto w;
}

int main() {}
