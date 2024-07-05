
#include <stdio.h>

long fn1() {}

long fn2() {
  long f = {fn1};
  return f;
}

int main() {
  long a_1 = fn2();
  printf("%ld\n", a_1);
  return 0;
}
