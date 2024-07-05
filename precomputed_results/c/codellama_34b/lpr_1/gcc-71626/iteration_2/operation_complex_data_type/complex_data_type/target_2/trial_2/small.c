
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <immintrin.h>

typedef long d __attribute__((__vector_size__(sizeof(long))));

d fn2() {
  d f = {fn1};
  return f;
}

int main() {
  d result = fn2();
  long x = result[0];
  long y = result[1];
  printf("x = %ld, y = %ld\n", x, y);
  return 0;
}

long fn1() {
  return 10;
}
