c
#include <stdio.h>

typedef long a;

a fn1() {}

typedef a d __attribute__((__vector_size__(sizeof(long))));

d fn2() {
  a c = fn1;
  d f = {c};
  return f;
}

int main() {
  d v = fn2();
  printf("v[0] = %ld\n", v[0]);
  return 0;
}
