#include <stdio.h>

struct c {
  int d;
  int e;
};

struct c f;

char fn1() {
  if (f.e) {
    f.d = 6L;
  } else {
    fn1();
    return 0xEEACFBBFL;
  }

  if (f.e) {
    f.d = 6L;
  } else {
    fn1();
    return 0xEEACFBBFL;
  }

  return 0xEEACFBBFL;
}

int main() {
  // TODO: Add code here

  return 0;
}
