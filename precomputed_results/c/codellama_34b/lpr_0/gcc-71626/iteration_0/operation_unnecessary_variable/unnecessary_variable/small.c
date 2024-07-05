
#include <stdint.h>

typedef long d __attribute__((__vector_size__(sizeof(long))));

// Optimized out by constant propagation
fn1() {}

d fn2() {
  // Optimized out by copy propagation
  return (d){fn1};
}

int main() {
  // fn1 is unused, so it is optimized out
  return 0;
}
