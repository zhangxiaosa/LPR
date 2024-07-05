#include <stdio.h>

void fn1() {}

long fn2() {
  /*long f = {fn1};*/
  long f;
  return f;
}

int main() {
  long f = fn2();
  return 0;
}
