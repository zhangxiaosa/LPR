#include <stdio.h>

long fn2() {
  long f0, f1, f2, f3;
  long fn1_result;

  fn1_result = fn1();

  f0 = fn1_result;
  f1 = fn1_result;
  f2 = fn1_result;
  f3 = fn1_result;

  return ((f3 << 48) | (f2 << 32) | (f1 << 16) | f0);
}

int main() {
  return 0;
}