#include <stdbool.h>

int fn3(int p1, int p2) { return p2 == 0 || p1 && p2 ? p1 : p1 % p2; }

unsigned fn6(unsigned p1, unsigned p2) { return p1 - p2; }

int p;
short q;
unsigned r = 0x2A52L;
unsigned s = 0x03F238A4L;
unsigned t2;

static unsigned fn7(short);

unsigned fn7(short p1) {
  int ai;
  ai = fn3(p1, p);

  if (s) {
    unsigned af;
    for (; p1; --p1)
      ;

    // Unrolling the loop
    for (af = 0; af <= 49; af = af + 8) {
      int ag[8][6][5] = {1L};
      unsigned ah;

      if (p1, ag[6][5][0] + p1 || p1 && (ai = fn3(p1, 0xBC2AB98CL), 9))
        ;
      else {
        ah = ai;
        if (!r)
          break;
      }

      // Loop body unrolled for n iterations
      p1 = fn6(0x60781BCDL >= fn3(fn3(0x809CL, p1) > 0xB5L, p1) != p1 ^
                   4294967287UL,
               ah);
      p = p1;
      ai = fn3(0x7D765DB6L, p);

      // Repeat loop body for n iterations
      // 1st unrolled iteration
      p1 = fn6(0x60781BCDL >= fn3(fn3(0x809CL, p1) > 0xB5L, p1) != p1 ^
                   4294967287UL,
               ah);
      p = p1;
      ai = fn3(0x7D765DB6L, p);

      // 2nd unrolled iteration
      p1 = fn6(0x60781BCDL >= fn3(fn3(0x809CL, p1) > 0xB5L, p1) != p1 ^
                   4294967287UL,
               ah);
      p = p1;
      ai = fn3(0x7D765DB6L, p);

      // 3rd unrolled iteration
      p1 = fn6(0x60781BCDL >= fn3(fn3(0x809CL, p1) > 0xB5L, p1) != p1 ^
                   4294967287UL,
               ah);
      p = p1;
      ai = fn3(0x7D765DB6L, p);

      // 4th unrolled iteration
      p1 = fn6(0x60781BCDL >= fn3(fn3(0x809CL, p1) > 0xB5L, p1) != p1 ^
                   4294967287UL,
               ah);
      p = p1;
      ai = fn3(0x7D765DB6L, p);

      // 5th unrolled iteration
      p1 = fn6(0x60781BCDL >= fn3(fn3(0x809CL, p1) > 0xB5L, p1) != p1 ^
                   4294967287UL,
               ah);
      p = p1;
      ai = fn3(0x7D765DB6L, p);

      // 6th unrolled iteration
      p1 = fn6(0x60781BCDL >= fn3(fn3(0x809CL, p1) > 0xB5L, p1) != p1 ^
                   4294967287UL,
               ah);
      p = p1;
      ai = fn3(0x7D765DB6L, p);

      // 7th unrolled iteration
      p1 = fn6(0x60781BCDL >= fn3(fn3(0x809CL, p1) > 0xB5L, p1) != p1 ^
                   4294967287UL,
               ah);
      p = p1;
      ai = fn3(0x7D765DB6L, p);

      // 8th unrolled iteration
      p1 = fn6(0x60781BCDL >= fn3(fn3(0x809CL, p1) > 0xB5L, p1) != p1 ^
                   4294967287UL,
               ah);
      p = p1;
      ai = fn3(0x7D765DB6L, p);
    }
  } else {
    t2 = fn3(fn3(p1, q), 0x9CFB623FL);
  }

  return p1;
}

int main() {
  if (fn7(1))
    ;
}
