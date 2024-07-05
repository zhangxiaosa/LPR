#include <stdio.h>

typedef signed a;
typedef short b;
typedef int c;
typedef unsigned d;
typedef short e;
typedef unsigned f;

static b g = 0x7EBAL;
d h = 0xCAL;
e i;
c j[5][5];
f k = 0xAF7C65D6L;
static d l;
f m[9][2][3];
c n;

f fn3() {
  f m[6][3][2];

  if (k)
    return m[g][l + 1][l];
  return j[g][g];
}

int main() {
  fn3();
}