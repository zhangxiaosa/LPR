#include <stdio.h>

static short g = 0x7EBAL;
unsigned h = 0xCAL;
short i;
int j[5][5];
unsigned k = 0xAF7C65D6L;
static unsigned l;
unsigned m[9][2][3];

unsigned fn1(int p1) {
  p1 || (m[1][0][1] = p1);   // Unchanged
  return 2;                 // Unchanged
}

int fn2(int p1) {
  unsigned v[6][3][2];
  for (i = 0;;) {
    if (k)
      break;
    return v[g][l + 1][l];
  }
  if (h)
    ;
  else
    return j[g][g];
  ;                         // Optimized loop
  return 0x709BFC8AL;       // Unchanged
}

unsigned fn3() {
  fn1(fn2(0));              // Unchanged
  return 0;                // Unchanged
}

int main() { 
  fn3();
  return 0;                 // Unchanged
}