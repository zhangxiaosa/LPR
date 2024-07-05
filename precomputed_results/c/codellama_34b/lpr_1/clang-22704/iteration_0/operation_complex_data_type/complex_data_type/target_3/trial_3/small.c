
#include <stdio.h>

typedef char b;
int d;
int e;

b fn1() {
  int h_high = 6L;
  int h_low = 0;
  if (e)
    goto i;
  fn1();
  b j;
  return j;
i:
  d = h_high;
  fn1();
  j = 0xEEACFBBFL;
  return j;
}

int main() {
  int h = 0;
  int h_high = 0;
  int h_low = 0;

  h_high = 6L;
  h_low = 0;

  if (e)
    goto i;
  fn1();
  b j;
  return j;
i:
  d = h_high;
  fn1();
  j = 0xEEACFBBFL;
  return j;
}
