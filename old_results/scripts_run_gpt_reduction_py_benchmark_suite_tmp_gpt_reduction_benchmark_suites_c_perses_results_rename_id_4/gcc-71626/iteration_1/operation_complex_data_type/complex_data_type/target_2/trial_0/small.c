#include <stdio.h>

typedef long d __attribute__((__vector_size__(sizeof(long))));

d fn2() {
  long c = fn1();
  long element0 = c;

  d f;
  f[0] = element0;

  return f;
}

int main() {
  // Empty main function
  return 0;
}