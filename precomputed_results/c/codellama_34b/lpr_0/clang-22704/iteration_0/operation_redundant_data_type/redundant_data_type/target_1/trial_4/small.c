
#include <stdio.h>

struct c {
  int d;
  int e;
};

struct c const f;

char fn1() {
  int const h = 6L;
  if (f.e)
    goto i;
  fn1();
  char j;
  return j;
i:
  f.d = h;
  fn1();
  j = 0xEEACFBBFL;
  return j;
}

int main() {
  // your code goes here
  return 0;
}
