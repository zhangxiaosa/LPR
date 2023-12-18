#include <iostream>

int fn2(int p1, unsigned p2) { return p1; }

int fn3(int p1, int p2) { return (p2 == 0 || p1 && p2) ? p1 : p1 % p2; }

unsigned fn6(unsigned p1, unsigned p2) { return p1 - p2; }

int p;
short q;
static unsigned r = 0x2A52L;
unsigned s = 0x03F238A4L;
unsigned t2;

int main() {
  if (1) {
    if (s) {
      unsigned ah;
      if (fn2(1, p1 || 1 && (p = fn3(1, 0xBC2AB98CL), 9)))
        ;
      else {
        ah = p;
        if (!r)
          break;
      }
      p1 = fn6(0x60781BCDL >= fn3(fn3(0x809CL, 1) > 0xB5L, 1) != 1 ^
                   4294967287UL,
               ah);
      p = 1;
    } else
      t2 = fn3(fn3(1, q), 0x9CFB623FL);
  }
}