#include <stdio.h>

int d;
int e;

typedef char b;

b fn1() {
  if (e)
    goto i;
  fn1();
  b j;
  return j;
i:
  d = 6L;
  fn1();
  j = 0xEEACFBBFL;
  return j;
}

int main() {}
