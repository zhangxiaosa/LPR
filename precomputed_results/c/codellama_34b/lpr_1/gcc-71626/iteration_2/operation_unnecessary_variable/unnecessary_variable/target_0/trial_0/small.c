
#include <stdint.h>

typedef long d __attribute__((__vector_size__(sizeof(long))));

d fn2() {
  return {fn1};
}

int main() {
  d result = fn2();
  return 0;
}
