
#include <stdio.h>

int fn1(int *h) {
  if (*h == 0xEEACFBBFL) {
    *h = 0xEEACFBBFL;
    fn1(h);
    return 0xEEACFBBFL;
  }
  fn1(h);
  return 0xEEACFBBFL;
}

int main() {
  int h = 0;
  fn1(&h);
  return 0;
}
