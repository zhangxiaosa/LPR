
#include <stdio.h>

int e;

int fn1(int *h) {
  *h = 0xEEACFBBFL;
  return 0xEEACFBBFL;
}

int main() {
  int h;
  fn1(&h);
  printf("%d\n", h);
  return 0;
}
