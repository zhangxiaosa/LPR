#include <stdio.h>

struct {
  int d;
  int e;
} f;

char fn1() {
  int h = 6L;
  if (f.e) {
    f.d = h;
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
