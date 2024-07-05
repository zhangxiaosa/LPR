#include <stdio.h>

int f, b;

char fn1() {
  int h = 6L;
  if (b)
    goto i;
  fn1();
  char j;
  return j;

i:
  b = h;
  fn1();
  j = 0xEEACFBBFL;
  return j;
}

int main() {}
