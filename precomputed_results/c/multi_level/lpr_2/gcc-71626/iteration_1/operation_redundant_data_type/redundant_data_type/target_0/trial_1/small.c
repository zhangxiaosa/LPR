#include <stdio.h>

long fn1() {}

int main() {
  long c = fn1();
  long f = {c};
  return 0;
}