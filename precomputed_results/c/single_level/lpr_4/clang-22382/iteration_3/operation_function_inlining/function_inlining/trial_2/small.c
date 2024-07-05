#include <stdint.h>

struct h {
  signed i;
  long j;
  unsigned k;
};

uint32_t fn2() {
  struct h p;
  p.k;
w:
  goto w;
}

int main() {}
