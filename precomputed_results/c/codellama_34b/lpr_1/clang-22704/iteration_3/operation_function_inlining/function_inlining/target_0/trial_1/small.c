
#include <stdio.h>

int fn1(int *h) {
  int temp = 0xEEACFBBFL;
  if (e) {
    *h = temp;
    fn1(h);
    return temp;
  }
  fn1(h);
  return temp;
}

int main() {
  int e = 5;
  int h = 0;
  fn1(&h);
  printf("%d\n", h);
  return 0;
}
