
#include <stdio.h>

int d;
int e;

int fn1() {
  int h = 6L;
  int j;
  if (e) {
    d = h;
    fn1();
    j = 0xEEACFBBFL;
  } else {
    fn1();
    j = 0;
  }
  return j;
}

int main() {
  return 0;
}
