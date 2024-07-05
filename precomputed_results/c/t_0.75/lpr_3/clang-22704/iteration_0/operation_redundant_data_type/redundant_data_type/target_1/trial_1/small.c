#include <stdio.h>

int f;

int fn1() {
  int h = 6L;
  if (f)
    goto i;
  fn1();
  int j;
  return j;
i:
  f = h;
  fn1();
  j = 0xEEACFBBF;
  return j;
}

int main() {
  return 0;
}