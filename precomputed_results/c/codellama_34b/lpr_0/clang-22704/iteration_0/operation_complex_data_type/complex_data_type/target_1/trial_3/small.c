
#include <stdio.h>

// Decomposed variables
int d;
int e;

// Decomposed functions
int fn1() {
  int h = 6L;
  if (e)
    goto i;
  fn1();
  int j;
  return j;
i:
  d = h;
  fn1();
  j = 0xEEACFBBFL;
  return j;
}

int main() {
  // Initialize variables
  d = 0;
  e = 0;

  // Call function
  fn1();

  return 0;
}
