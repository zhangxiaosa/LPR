#include <stdint.h>

struct h {
  signed i;
  long j;
  unsigned k;
};

uint32_t l;

uint32_t fn2(p1) {
  struct h p;
  int q;

  // Body of fn1 inlined
  p.k;
w:
  goto w;

  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}