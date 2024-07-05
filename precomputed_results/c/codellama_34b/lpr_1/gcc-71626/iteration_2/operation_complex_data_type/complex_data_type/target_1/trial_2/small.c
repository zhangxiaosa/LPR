
#include <stdio.h>
#include <stdint.h>

typedef long d __attribute__((__vector_size__(sizeof(long))));

d fn2() {
  d f = {fn1};
  return f;
}

int main() {
  d result = fn2();
  printf("Result: %ld\n", result);
  return 0;
}
