
#include <stdio.h>

long fn1() {}

typedef long d;

d fn2(long c) {
  d f = {c};
  return f;
}

int main() {
  long c = fn1();
  d f = fn2(c);
  return 0;
}
