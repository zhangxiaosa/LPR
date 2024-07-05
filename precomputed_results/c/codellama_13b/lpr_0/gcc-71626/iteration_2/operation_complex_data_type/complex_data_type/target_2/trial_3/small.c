
#include <stdio.h>

typedef long d;

long fn1() {
  return 0;
}

long fn2() {
  return fn1();
}

int main() {
  long a = fn2();
  printf("a = %ld\n", a);
  return 0;
}
