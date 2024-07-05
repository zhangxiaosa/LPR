
#include <stdio.h>

int e;

int fn1() {
  if (e)
    goto i;
  fn1();
  return 0xEEACFBBFL;
i:
  int d = 0xEEACFBBFL;
  fn1();
  return 0xEEACFBBFL;
}

int main() {}
