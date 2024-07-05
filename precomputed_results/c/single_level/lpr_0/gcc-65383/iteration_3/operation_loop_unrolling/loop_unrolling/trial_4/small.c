#include<stdio.h>

unsigned g;
int h2 = 0x92A1D2CDL;
static unsigned i = 0x06D7L;

unsigned fn2() {
  int r[5];

  // Iteration 1
  if (h2)
    return 0xC3L;
  g = *(r + i);

  // Iteration 2
  if (h2)
    return 0xC3L;
  g = *(r + i);

  // Iteration 3
  if (h2)
    return 0xC3L;
  g = *(r + i);

  // Iteration 4
  if (h2)
    return 0xC3L;
  g = *(r + i);

  // Iteration 5
  if (h2)
    return 0xC3L;
  g = *(r + i);
}

int main() {
  fn2();
}
