#include <stdio.h>

long fn1() {}

long fn2() {
  long c = fn1();
  long f = {c};
  return f;
}

int main() {}
