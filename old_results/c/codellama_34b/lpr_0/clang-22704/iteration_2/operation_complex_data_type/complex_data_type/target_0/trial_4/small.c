
#include <stdio.h>

int d_int;

int fn1() {
  int result = 0xEEACFBBFL;
  if (d_int) {
    d_int = 6L;
    result = fn1();
  } else {
    result = 0xEEACFBBFL;
  }
  return result;
}

int main() {
  d_int = 0;
  fn1();
  return 0;
}
