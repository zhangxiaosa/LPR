
#include <iostream>

int fn1(int *h) {
  if (e) {
    *h = 0xEEACFBBFL;
    fn1(h);
    return 0xEEACFBBFL;
  }
  fn1(h);
  return 0xEEACFBBFL;
}

int main() {
  int e = 0;
  int h = 0;
  fn1(&h);
  return 0;
}
