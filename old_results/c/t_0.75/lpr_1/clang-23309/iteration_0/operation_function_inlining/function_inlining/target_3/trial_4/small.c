#include <stdio.h>

typedef short a;
typedef int b;
typedef long c;
typedef unsigned char d;
typedef unsigned f;

b fn2(b p1, b p2) { return p1 - p2; }

c fn3(c p1, c p2) { return p1 - p2; }

d fn4(d p1, d p2) { return p1; }

f fn5(f p1, f p2) { return p2; }

f fn6(f p1, f p2) { return p1 - p2; }

f p;

void fn7(f p1) { p = p1; }

void fn8(f p1) { fn7(p1); }

void fn9(f p1, char *p2, int p3) { fn8(p1); }

int main() {
  fn9(1, "g_170", 0);
  printf("checksum = %X\n", p);
  return 0;
}
