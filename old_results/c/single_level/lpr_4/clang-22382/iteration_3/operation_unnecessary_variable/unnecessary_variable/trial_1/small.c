#include <stdint.h>

struct h {
  signed i;
  long j;
  unsigned k;
};

static struct h fn1();

uint32_t fn2() {
  struct h p;
  fn1();
  for (;;) {
    p = p;
  }
}

struct h fn1() {
  goto w;
w:
  goto w;
}

int main() {
  return 0;
}
