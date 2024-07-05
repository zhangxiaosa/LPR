#include <stdio.h>

static short g = 0x7EBAL;
unsigned h = 0xCAL;
short i;
int j[5][5];
unsigned k = 0xAF7C65D6L;
static unsigned l;
unsigned m[9][2][3];
int n;

int fn3() {
  int p1 = fn2(0);
  p1 || (m[1][0][1] = p1);
  return n;
}

int fn2(p1) {
  unsigned v[6][3][2];

  if (k)
    goto loop_end_4;

  if (h)
    ;
  else
    return j[g][g];

loop_body_1:
  // Loop body 1
  // ...

loop_body_2:
  // Loop body 2
  // ...

loop_body_3:
  // Loop body 3
  // ...

loop_end_1:
  if (--p1)
    goto loop_body_1;
  else
    goto loop_end_4;

loop_end_2:
  if (--p1)
    goto loop_body_2;
  else
    goto loop_end_4;

loop_end_3:
  if (--p1)
    goto loop_body_3;
  else
    goto loop_end_4;

loop_end_4:
  return 0x709BFC8AL;
}

int main() {
  fn3();
  return 0;
}