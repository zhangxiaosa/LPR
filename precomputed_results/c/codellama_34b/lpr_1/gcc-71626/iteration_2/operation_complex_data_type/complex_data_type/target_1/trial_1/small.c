
#include <stdint.h>

typedef long d __attribute__((__vector_size__(sizeof(long))));

d fn2() {
  long f = fn1();
  d result = {f};
  return result;
}

int main() {
  return 0;
}
