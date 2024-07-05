#include <stdio.h>

long fn1() {}

typedef long a;

long fn2() {
  a c = fn1();
  long f = c;
  return f;
}

int main() {}
