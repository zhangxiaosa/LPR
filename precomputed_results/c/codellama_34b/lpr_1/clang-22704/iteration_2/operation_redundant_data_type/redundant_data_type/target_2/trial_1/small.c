
#include <iostream>

int fn1(int *h) {
  if (*h) {
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
  std::cout << h << std::endl;
  return 0;
}
