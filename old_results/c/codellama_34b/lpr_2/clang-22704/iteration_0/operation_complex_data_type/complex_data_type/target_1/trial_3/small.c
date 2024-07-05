
#include <stdio.h>

int fn1(int h, int d, int e) {
  if (e) {
    d = h;
    fn1();
    return 0xEEACFBBFL;
  } else {
    fn1();
    return 0;
  }
}

int main() {
  int h = 6L;
  int d = 0;
  int e = 1;
  int result = fn1(h, d, e);
  printf("result: %d\n", result);
  return 0;
}

