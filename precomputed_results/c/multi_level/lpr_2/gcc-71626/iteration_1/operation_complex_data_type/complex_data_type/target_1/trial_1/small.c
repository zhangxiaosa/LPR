#include <stdio.h>

void fn1() {}

typedef long d;

d fn2() {
  long c = fn1;
  d f = c;
  return f;
}

int main() {
  return 0;
}