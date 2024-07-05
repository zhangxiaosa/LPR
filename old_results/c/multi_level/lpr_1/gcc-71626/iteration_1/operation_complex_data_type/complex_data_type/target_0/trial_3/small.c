#include <stdio.h>

void fn1() {}

long fn2() {
  long f = fn1();
  return f;
}

int main() {}
