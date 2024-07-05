
#include <stdlib.h>
#include <stdio.h>

typedef long d __attribute__((__vector_size__(sizeof(long))));

void fn1() {}

d fn2() {
  d f = {};
  return f;
}

int main() {
  d result = fn2();
  printf("%ld\n", result);
  return 0;
}

