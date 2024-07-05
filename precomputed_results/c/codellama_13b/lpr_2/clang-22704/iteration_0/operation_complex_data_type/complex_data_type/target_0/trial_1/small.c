c
#include <stdio.h>

long e;
long d;
int main() {}

long fn1() {
  if (e)
    goto i;
  fn1();
  long j;
  return j;
i:
  d = 6L;
  fn1();
  j = 0xEEACFBBFL;
  return j;
}
