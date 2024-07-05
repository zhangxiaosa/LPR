#include <stdio.h>

int fn2(int p1, int p2) { return p1 - p2; }

unsigned char fn4(unsigned int p1, unsigned int p2) { return p1; }

unsigned int fn5(unsigned int p1, unsigned int p2) { return p2; }

unsigned int fn6(unsigned int p1, unsigned int p2) { return p1 - p2; }

unsigned int p;
long int v;
int w;
unsigned int ab;
int ac = 1;

int fn13() {
  long int am = 1;
  int an;
  for (w = 3; w; w -= 1)
    if (an = 250) {
      ab = fn5(ab, ac) || (an = w) == 0x294A85636008822D;
      int ao = 0xBCD1;
      if (fn2(ao - fn4(fn6(am, an), 0xEC), ab) & 1)
        v = 1;
    }
  return 3;
}

int main() {
  fn13();
  p = v;
  printf("checksum = %X\n", p);
  return 0;
}