#include <stdio.h>

int d;
int e;

char fn1() {
  int h = 6L;
  if (e) {
    d = h;
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
