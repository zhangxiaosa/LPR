
#include <stdio.h>

int d;
int e;

int fn1() {
  int h = 6L;
  int i = e;
  if (i) {
    d = h;
    fn1();
    int j = 0xEEACFBBFL;
    return j;
  } else {
    fn1();
    int j = 0;
    return j;
  }
}

int main() {
  return 0;
}
