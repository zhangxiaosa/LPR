#include <stdio.h>

typedef int c;
typedef unsigned d;

static short g_new = 0x7EBA;
unsigned h = 0xCA;
short i;
int j[5][5];
unsigned k = 0xAF7C65D6L;
static unsigned l;
unsigned m[9][2][3];
int n;

unsigned fn1(int p1, short p2, int p3, int p4);
int fn2(int p1);

unsigned fn3() {
  fn1(fn2(0), 7, 7, 0);
  return n;
}

unsigned fn1(int p1, short p2, int p3, int p4) {
  p1 || (m[1][0][1] = p1);
  return 2;
}

int fn2(int p1) {
  unsigned v[6][3][2];
  c w = 0x709BFC8AL;
  for (; i < 6;) {
    if (k)
      break;
    return v[g_new][0][0];
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
