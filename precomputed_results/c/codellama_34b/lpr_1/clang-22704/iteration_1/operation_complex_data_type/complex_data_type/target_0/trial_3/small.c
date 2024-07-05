
#include <stdio.h>

int fn1(int h) {
  return h * 2;
}

int main() {
  int x, y, z;
  x = 10;
  y = 20;
  z = fn1(x);
  printf("x = %d, y = %d, z = %d\n", x, y, z);
  return 0;
}

