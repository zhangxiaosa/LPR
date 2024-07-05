#include <stdio.h>

typedef long d __attribute__((__vector_size__(sizeof(long))));

d fn2() {
  long c = 0; // inline fn1 by assigning a specific value to c
  d f = {c};
  return f;
}

int main() {
  // main function code
  return 0;
}