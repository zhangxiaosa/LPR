#include <stdio.h>

typedef int c;
typedef unsigned d;

static short g_new = 0x7EBA;
d h = 0xCA;
short i;
c j[5][5];
unsigned k = 0xAF7C65D6L;
static d l;
unsigned m[9][2][3];
c n;

unsigned fn1(signed p1, short p2, int p3, signed p4);
signed fn2(int);

unsigned fn3() {
  fn1(fn2(0), 7, 7, 0);
  return n;
}

unsigned fn1(signed p1, short p2, int p3, signed p4) {
  p1 || (m[1][0][1] = p1);
  return 2;
}

signed fn2(p1) {
  unsigned v[6][3][2];
  c w = 0x709BFC8AL;
  for (; i < 6;) {
    if (k)
      break;
    return v[g_new][l][l];
  }
  if (h)
    ;
  else
    return j[g_new][g_new];
  for (; p1;)
    ;
  return w;
}

int main() { fn3(); }
