
#include <stdio.h>

typedef long d;

long fn1() {
  long c = 0;
  return c;
}

d fn2() {
  long c = fn1();
  d f = c;
  return f;
}

int main() {
  long c = fn1();
  d f = c;
  printf("f = %ld\n", f);
  return 0;
}
