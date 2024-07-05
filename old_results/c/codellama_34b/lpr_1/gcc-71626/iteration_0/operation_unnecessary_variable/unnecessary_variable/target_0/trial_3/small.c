
#include <stdio.h>

typedef long d __attribute__((__vector_size__(sizeof(long))));

d fn2() {
  long c = fn1;
  d f = {c};
  return f;
}

int main() {
  d f = fn2();
  printf("%ld\n", f[0]);
  return 0;
}
