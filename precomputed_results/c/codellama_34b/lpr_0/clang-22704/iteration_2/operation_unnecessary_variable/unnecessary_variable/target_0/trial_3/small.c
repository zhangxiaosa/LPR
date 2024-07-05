
#include <stdio.h>

int d_int_value;

int fn1() {
  if (d_int_value) {
    goto j;
  }
  fn1();
  return 0xEEACFBBFL;
j:
  fn1();
  return 0xEEACFBBFL;
}

int main() {
  fn1();
  return 0;
}
