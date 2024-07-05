#include <stdio.h>

static short g = 0x7EBAL;
unsigned h = 0xCAL;
short i;
int j[5][5];
unsigned k = 0xAF7C65D6L;
static unsigned l;
unsigned m[9][2][3];

unsigned fn1(int p1, short p2) {
  p1 || (m[1][0][1] = p1);
  return 2;
}

unsigned fn3() {
  fn1(0, 7);
  return 0;
}

int main() {
  unsigned v[6][3][2];

  // Inlined code of fn2 starts here
  for (i = 0;;) {
    if (k) {
      break;
    } else {
      return v[g][l + 1][l];
    }
  }

  if (!h) {
    return j[g][g];
  }

  // Unused loop: for (; p1;) {}

  return 0x709BFC8A;
  // Inlined code of fn2 ends here

  fn3();
}
