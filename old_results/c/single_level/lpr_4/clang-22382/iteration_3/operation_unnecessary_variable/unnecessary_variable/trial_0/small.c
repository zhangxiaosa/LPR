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
  for (;;) {
    p = p;
  }
}

struct h fn1(struct h p5) {
  p5.k;
w:
  goto w;
}

int main() {}
