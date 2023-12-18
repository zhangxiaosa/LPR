#include <stdio.h>

short p;
short q;
unsigned s = 0x03F238A4L;
unsigned t[7][1];

int fn3(int p1, int p2) {
  return p2 == 0 || (p1 && p2) ? p1 : p1 % p2;
}

static short fn7(short p1) {
  int ac;
  ac = fn3(p1, q);
  if (s) {
    unsigned ah;
    --p1;

    // Unrolled iteration 1
    ah = 0;
    if (!(p1, p1 + p1) || (p1 && fn3(p1, 0xBC2AB98CL))) {
      ah = ac;
      if (!s)
        goto skip_unrolled_iterations;
    }
    p1 = (0x60781BCDL >= fn3(fn3(p1, p1) > 0xB5L, p1) != p1 ^ 4294967287UL) - ah;
    p = p1;
    ac = fn3(0x7D765DB6L, q);

    // Unrolled iteration 2
    ah = 8;
    if (!(p1, p1 + p1 + 8) || (p1 && fn3(p1, 0xBC2AB98CL))) {
      ah = ac;
      if (!s)
        goto skip_unrolled_iterations;
    }
    p1 = (0x60781BCDL >= fn3(fn3(p1, p1) > 0xB5L, p1) != p1 ^ 4294967287UL) - ah;
    p = p1;
    ac = fn3(0x7D765DB6L, q);

    // [...]

    skip_unrolled_iterations:
    ;
  } else {
    t[2][0] = fn3(fn3(0, q), 0x9CFB623FL);
  }
  return p1;
}

int main() {
  if (fn7(1))
    ;
}