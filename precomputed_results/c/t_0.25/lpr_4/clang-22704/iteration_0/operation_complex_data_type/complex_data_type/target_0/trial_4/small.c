#include <stdio.h>

int f_d;
int f_e;

char fn1() {
  int h = 6L;
  if (f_e) {
    f_d = h;
    fn1();
    char j = 0xEEACFBBFL;
    return j;
  } else {
    fn1();
    char j;
    return j;
  }
}

int main() {}
