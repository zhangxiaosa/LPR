

#include <stdio.h>

int d;
int e;

int fn1() {
  if (e) {
    d = 6L;
    return 0xEEACFBBFL;
  } else {
    fn1();
  }
  return 0xEEACFBBFL;
}

int main() {
  int d = 0;
  int e = 1;
  fn1();
  printf("%d\n", d);
  return 0;
}
