#include <stdio.h>

struct {
  int d;
  int e;
} f;

int h;
char j;

char fn1() {
  h = 6L;
  if (f.e) {
    f.d = h;
    fn1();
    j = 0xEEACFBBFL;
    return j;
  } else {
    fn1();
    return j;
  }
}

int main() {}
