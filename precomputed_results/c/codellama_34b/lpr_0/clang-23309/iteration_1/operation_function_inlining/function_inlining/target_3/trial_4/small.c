
#include <stdio.h>

typedef unsigned char d;
typedef short e;
typedef unsigned f;
typedef unsigned g;

int fn2(int p1, int p2) { return p1 - p2; }
long fn3(long p1, long p2) { return p1 - p2; }
d fn4(d p1, d p2) { return p1; }
f fn5(f p1, f p2) { return p2; }
f fn6(f p1, f p2) { return p2 - p1; }
f p;
void fn9(g p1, char *p2, int p3) { p = p1; }
unsigned v;
short w = 3;
short ac = 1L;
d fn10(g, e);
d fn11(d, f, int, e);
short fn12(int, int, d, short);

int fn13() {
  e an = 1UL;
  while (w) {
    if (an = 250UL) {
      p2 = fn5(248UL, ac) || (an = w) == 0x294A85636008822DLL;
      short ao = 0xBCD1L;
      if (fn2(fn3(ao, fn4(fn6(1L, an), 0xECL)), p2) & 1UL)
        v = 1UL;
    }
    w--;
  }
  return 0;
}

int main() {
  fn13();
  p = v;
  printf("checksum = %X\n", p);
  return 0;
}
