
#include <stdint.h>

typedef uint64_t d __attribute__((__vector_size__(sizeof(uint64_t))));

d fn2() {
  return (d){fn1()};
}

int main() {
  fn2();
  return 0;
}
