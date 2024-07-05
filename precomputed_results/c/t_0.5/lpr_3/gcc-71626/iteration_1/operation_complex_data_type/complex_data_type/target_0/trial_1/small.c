#include <stdio.h>

long fn1() {}

typedef long d[4];

d fn2() {
  long c = (long)fn1;
  d f = {c, 0, 0, 0};
  return f;
}

int main() {}
