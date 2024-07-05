
#include <stdint.h>

typedef long d __attribute__((__vector_size__(sizeof(long))));

void fn1() {}

d fn2() {
  long a, b, c;
  a = fn1();
  b = fn1();
  c = a + b;
  return (d){c};
}

int main() {
  d result = fn2();
  return 0;
}
