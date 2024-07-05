#include <stdint.h>

typedef long d __attribute__((__vector_size__(sizeof(long))));

d fn1() {}

d fn2() {
  d f = {(long)fn1};
  return f;
}

int main() {}
