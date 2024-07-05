#include <stdio.h>

unsigned fn2(int p1, int p2) { return p1 - p2; }
unsigned fn3(unsigned p1, unsigned p2) { return p1 - p2; }
unsigned char fn4(int p1, int p2) { return p1; }

int p;
int t;
short w;
short ac = 1L;

int main() {
  int an;
  for (w = 3; w; w -= 1)
    if (an = 250L) {
      t = ac || (an = w) == 0x294A85636008822DL;
      if (fn2(fn3(0xBCD1L, fn4(1L - an, 0xECL)), t) & 1L)
        p = 1L;
    }
  printf("checksum = %lX\n", (long)p);
  return 0;
}