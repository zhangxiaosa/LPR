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
    struct h r;
    p = r = p;
  }
}

struct h fn1(struct h p5) {
  p5.k;
  return p5;
}

int main() {
  return 0;
}