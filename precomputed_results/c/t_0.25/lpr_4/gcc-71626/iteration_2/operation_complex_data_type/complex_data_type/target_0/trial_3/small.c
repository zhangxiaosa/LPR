#include <stdio.h>

long fn1() {}

long fn2() {
  long f[2] = { (long)fn1, (long)fn1 };
  return f;
}

int main() {}