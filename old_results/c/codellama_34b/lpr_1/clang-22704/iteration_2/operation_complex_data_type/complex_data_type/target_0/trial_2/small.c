
#include <stdio.h>

int e, f, g;

int fn1(int *h) {
  if (e) {
    f = 0xEEACFBBFL;
    g = fn1(h);
    return 0xEEACFBBFL;
  }
  g = fn1(h);
  return 0xEEACFBBFL;
}

int main() {
  int *ptr = &e;
  fn1(ptr);
  return 0;
}
