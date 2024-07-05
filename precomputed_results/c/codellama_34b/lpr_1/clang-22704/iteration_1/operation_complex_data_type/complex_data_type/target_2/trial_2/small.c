
#include <stdio.h>

int d;
int e;
int fn1(int* h) {
  if (e == 0)
    goto i;
  fn1(h);
  return 0xEEACFBBFL;
i:
  d = *h;
  fn1(h);
  return 0xEEACFBBFL;
}

int main() {
  int h = 10;
  int result = fn1(&h);
  printf("result = %d\n", result);
  return 0;
}
