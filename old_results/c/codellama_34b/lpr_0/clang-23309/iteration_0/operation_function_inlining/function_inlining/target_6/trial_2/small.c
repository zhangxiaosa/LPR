
#include <stdint.h>
#include <stdio.h>

typedef short a;
typedef int b;
typedef long c;
typedef unsigned char d;
typedef short e;
typedef unsigned f;
typedef unsigned g;

void fn1(f p1, int p2) { printf("checksum = %X\n", p1); }
b fn2(b p1, b p2) { return p1 - p2; }
c fn3(c p1, c p2) { return p1 - p2; }
f p;
void fn7(p1) { p = p1; }
void fn8(p1) { fn7(p1); }
void fn9(g p1, char *p2, int p3) { fn8(p1); }
b t;
f u;
c v;
a w;
f ab;
a ac = 1L;
int main() {
  int ap = 0;
  fn13();
  fn9(v, "g_170", ap);
  printf("checksum = %X\n", p);
  return 0;
}
