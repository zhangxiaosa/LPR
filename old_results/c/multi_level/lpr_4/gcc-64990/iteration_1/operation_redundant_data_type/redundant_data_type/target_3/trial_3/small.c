#include <stdio.h>

static unsigned g = 0x7EBA;
unsigned h = 0xCA;
unsigned i;
unsigned j[5][5];
unsigned k = 0xAF7C65D6;
static unsigned l;
unsigned m[9][2][3];
unsigned n;

unsigned fn2(unsigned);

unsigned fn3() {
  unsigned p1 = fn2(0);
  p1 || (m[1][0][1] = p1);
  return n;
}

unsigned fn2(unsigned p1) {
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
  for (; p1;) {
  }
  return (unsigned)0x709BFC8A;
}

unsigned main() { fn3(); }
