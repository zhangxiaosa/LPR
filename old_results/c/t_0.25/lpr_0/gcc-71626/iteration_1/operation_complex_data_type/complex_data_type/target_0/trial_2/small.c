#include <stdio.h>

long fn1() {
  return 42;
}

long fn2() {
  long c = fn1();
  long f = c;
  return f;
}

int main() {
  return 0;
}