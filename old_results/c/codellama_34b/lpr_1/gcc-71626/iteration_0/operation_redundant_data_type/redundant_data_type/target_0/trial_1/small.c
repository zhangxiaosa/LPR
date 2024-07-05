
#include <stdio.h>

long int fn1() {
  return 0;
}

long int fn2() {
  long int c = fn1();
  long int f = {c};
  return f;
}

int main() {
  long int result = fn2();
  printf("Result: %ld\n", result);
  return 0;
}
