#include <stdio.h>

long c;
long f[2];

long fn1() {}

long fn2() {
  long temp = fn1();
  c = temp;
  f[0] = c;
  f[1] = 0;
  return f;
}

int main() {}
