
#include <stdio.h>

d fn2() {
  d f = {fn1};
  return f;
}

int main() {
  d result = fn2();
  printf("%ld\n", result);
  return 0;
}
