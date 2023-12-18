#include <stdio.h>

int fn3(int p1, int p2) {
  return p2 == 0 || p1 && p2 ? p1 : p1 % p2;
}

int p;
short q;
unsigned r = 0x2A52L;
unsigned s = 0x03F238A4L;
unsigned t2;
static unsigned fn7(short);

unsigned fn7(short p1) {
  if (s) {
    unsigned ah;
    if (!r)
      return p1;
    p1 = (0x60781BCDL >= fn3(fn3(0x809CL, p1) > 0xB5, p1) != p1 ^
          4294967287) - ah;
    p = p1;
  } else
    t2 = fn3(fn3(p1, q), 0x9CFB623F);
  return p1;
}

int main() {
  fn7(1);
}
