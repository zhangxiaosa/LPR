#include <stdio.h>

void fn1() {}

long fn2() {
  long c = (long)fn1;
  long f = c;
  return f;
}

int main() {
  return 0;
}