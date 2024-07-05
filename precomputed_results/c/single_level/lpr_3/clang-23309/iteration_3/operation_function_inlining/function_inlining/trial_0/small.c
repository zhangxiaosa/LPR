#include <stdio.h>

int fn2(int p1, int p2) { return p1 - p2; }
long fn3(long p1, long p2) { return p1 - p2; }
unsigned char fn4(unsigned p1, unsigned p2) { return p1; }
unsigned fn5(unsigned p1, unsigned p2) { return p2; }
unsigned fn6(unsigned p1, unsigned p2) { return p1 - p2; }

void fn9(unsigned p1, char *p2, int p3) { }

int main() {
  unsigned u;
  int t;
  long v;
  short w;
  unsigned ab;
  short ac = 1L;
  unsigned ag = 248UL;
  long ai = 7L;
  short aj = 1UL;
  int al = 3L;
  long am = 1L;
  int an;
  for (w = 3; w; w -= 1)
    if (an = 250UL) {
      ab = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
      short ao = 0xBCD1L;
      if (fn2(fn3(ao, ab - ac), ab) & 1UL)
        v = 1UL;
    }
  printf("checksum = %X\n", 2L);
  return 0;
}
