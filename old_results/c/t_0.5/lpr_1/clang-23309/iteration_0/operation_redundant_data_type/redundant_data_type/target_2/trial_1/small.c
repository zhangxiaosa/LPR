#include <stdio.h>

typedef unsigned char d;
typedef unsigned f;

int fn2(int p1, int p2) { return p1 - p2; }
long fn3(long p1, long p2) { return p1 - p2; }
d fn4(d p1, d p2) { return p1; }
f fn6(f p1, f p2) { return p1 - p2; }

short p;
int t;
short w;
short ac = 1L;

int main() {
  long am = 1L;
  int an;
  for (w = 3; w; w -= 1)
    if (an = 250UL) {
      t = ac || (an = w) == 0x294A85636008822LL;
      short ao = 0xBCD1L;
      if (fn2(fn3(ao, fn4(fn6(am, an), 0xECL)), t) & 1UL)
        p = 1UL;
    }
  printf("checksum = %lx\n", p);
  return 0;
}