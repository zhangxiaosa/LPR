#include <stdio.h>

int v;
int w = 0xDC6F3D13L;
long ag[4];

long fn2(int p1, int p2) { return p1 && p2 ? p1 : p1 % p2; }
long fn3(long p1, long p2) { return p2; }
int fn4(int p1, int p2) { return p1; }
int fn5(int p1, int p2) { return p2; }
unsigned fn6(unsigned p1, unsigned p2) { return p2; }
unsigned fn7(unsigned p1, unsigned p2) { return p1; }
long fn8(long p1, long p2) { return p1 + p2; }

long fn12() {
  int au[4][1][5];
  for (long ak = 0;;) {
    for (int ah = 0; ah <= 3; ah += 1)
      if (w >= (fn7(4UL, fn6(v, fn5(v, au[4][1][5] = fn8(~fn4(fn3(w, fn2(v, 1L)) != 0, v), ak) && 0x57L))) > 2)) {
        v = 0x41AEA787L;
        ag[3] = au[4][1][5];
      } else
        v = au[4][1][5];
    return w;
  }
}

int main() {
  fn12();
  v = v;
  printf("checksum = %u\n", v);
  return 0;
}