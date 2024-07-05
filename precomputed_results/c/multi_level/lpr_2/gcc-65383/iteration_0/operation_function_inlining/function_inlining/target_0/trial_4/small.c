#include <iostream> 

typedef signed a;
typedef int b;
typedef unsigned c;
typedef unsigned d;

b e;
c f;
d g;
b h[] = {0x92A1D2CDL, 0x92A1D2CDL, 0x92A1D2CDL};
static d i = 0x06D7L;
b j;

d fn2() {
  c q = 0xC3L;  // Inlined variable q from fn1
  b r[5][9][5]; // Inlined variable r from fn1

  if (h[2])
    j = q;
  else
    g = r[i][i][i];

  return j;
}

int main() {
  fn2();
}