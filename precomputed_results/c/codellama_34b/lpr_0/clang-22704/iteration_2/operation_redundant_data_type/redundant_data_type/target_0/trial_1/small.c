
#include <stdio.h>

int fn1() {
  int d_int = 0;
  if (d_int)
    goto j;
  fn1();
  return 0xEEACFBBFL;
j:
  d_int = 6;
  fn1();
  return 0xEEACFBBFL;
}

int main() {
  return 0;
}
