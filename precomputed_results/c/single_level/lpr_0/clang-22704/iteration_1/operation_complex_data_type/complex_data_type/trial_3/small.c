#include <stdio.h>

struct c {
  int d;
  int e;
};

int main() {
  struct c f;

  char fn1() {
    int h = 6L;

    if (f.e) {
      f.d = h;
      fn1();
      return 0xEEACFBBFL;
    } else {
      fn1();
      return 0xEEACFBBFL;
    }
  }

  return 0;
}