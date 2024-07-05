#include <stdio.h>

typedef long d;

void fn1() {}

d fn2() {
  long c = fn1();
  d f = c;
  return f;
}

int main() {
  fn2();
  return 0;
}