
<</SYS>>

#include <stdio.h>

typedef char b;

struct c {
  int d;
  int e;
};

struct c f;

b fn1() {
  int h = 6L;
  if (f.e)
    goto i;
  fn1();
  b j;
  return j;
i:
  f.d = h;
  fn1();
  j = 0xEEACFBBFL;
  return j;
}

int main() {
  f.d = 0;
  f.e = 0;
  fn1();
  printf("f.d = %d, f.e = %d\n", f.d, f.e);
  return 0;
}

