#include <stdio.h>

typedef char b;
struct c {
  int d;
  int e;
};

struct c f;

b fn1() {
  int h = 6L;

  if (f.e != 0)
    goto i;

  fn1();

  b j;
  return j;

i:
  f.d = h;

  fn1();

  j = 0xEEACFBBF;

  return j;
}

int main() {
  return 0;
}
