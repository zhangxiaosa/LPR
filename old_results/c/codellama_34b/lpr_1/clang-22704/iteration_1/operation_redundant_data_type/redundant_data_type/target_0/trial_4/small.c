
#include <stdio.h>

int fn1(int h) {
  if (d)
    goto i;
  fn1(h);
  return 0xEEACFBBFL;
i:
  d = h;
  fn1(h);
  return 0xEEACFBBFL;
}
int main() {
  int d;
  int e;

  d = fn1(10);
  e = fn1(20);

  printf("d = %d, e = %d\n", d, e);

  return 0;
}
