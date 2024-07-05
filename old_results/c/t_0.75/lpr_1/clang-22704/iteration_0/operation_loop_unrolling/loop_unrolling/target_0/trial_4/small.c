#include <stdio.h>

typedef int a;
typedef char b;

struct c {
  a d;
  a e;
};

struct c f;

b fn1() {
  a h = 6L;
  b j = 0xEEACFBBFL;  // Initialize j

  if (f.e)
    goto i;

  // First iteration
  f.d = h;
  j = 0xEEACFBBFL;

  // Second iteration
  f.d = h;
  j = 0xEEACFBBFL;

  return j;

i:
  f.d = h;

  // First iteration
  j = 0xEEACFBBFL;

  // Second iteration
  j = 0xEEACFBBFL;

  return j;
}

int main() {}
