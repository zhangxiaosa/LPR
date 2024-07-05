
#include <stdint.h>

typedef long d __attribute__((__vector_size__(sizeof(long))));

// Optimized out by constant propagation
d fn2() {
  return (d){};
}

int main() {
  // fn1 is unused, so it is optimized out
  return 0;
}
