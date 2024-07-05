
#include <stdio.h>

typedef long d;

d fn1() {
  return 0;
}

d fn2() {
  long c = fn1();
  d f = {c};
  return f;
}

int main() {
  d result = fn2();
  printf("%ld", result);
  return 0;
}
