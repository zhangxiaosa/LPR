#include <stdio.h>

int fn3(int p1, int p2) { return p2 == 0 || (p1 && p2) ? p1 : p1 % p2; }

signed o;
signed p;
short q;
static signed r = 0x2A52L;
unsigned s = 0x03F238A4L;
unsigned t[7][1];

static int fn7(short p1) {
  int ac;
  ac = fn3(p1, o);
  if (s) {
    unsigned af = 0;

    // Loop unrolling by a factor of 4
    for (; p1 >= 4; p1 -= 4) {
      unsigned ah1, ah2, ah3, ah4;

      if (p1 && fn3(p1, 0xBC2AB98CL))
        ;
      else {
        ah1 = ac;
        if (!r) {
          printf("l_1179=%lld\n", (long long)fn3(p1, 0xBC2AB98CL));
          break;
        }
      }

      ah2 = ac;
      ah3 = ac;
      ah4 = ac;

      // Iteration 1
      p1 = (0x60781BCDL >= fn3(fn3(0x809CL, p1) > 0xB5L, p1) != p1 ^ 4294967287UL) - ah1;
      p = p1;

      // Iteration 2
      p1 = (0x60781BCDL >= fn3(fn3(0x809CL, p1) > 0xB5L, p1) != p1 ^ 4294967287UL) - ah2;
      p = p1;

      // Iteration 3
      p1 = (0x60781BCDL >= fn3(fn3(0x809CL, p1) > 0xB5L, p1) != p1 ^ 4294967287UL) - ah3;
      p = p1;

      // Iteration 4
      p1 = (0x60781BCDL >= fn3(fn3(0x809CL, p1) > 0xB5L, p1) != p1 ^ 4294967287UL) - ah4;
      p = p1;
    }

    // Remaining iterations
    for (; p1; --p1) {
      unsigned ah;

      if (p1 && fn3(p1, 0xBC2AB98CL))
        ;
      else {
        ah = ac;
        if (!r) {
          printf("l_1179=%lld\n", (long long)fn3(p1, 0xBC2AB98CL));
          break;
        }
      }

      p1 = (0x60781BCDL >= fn3(fn3(0x809CL, p1) > 0xB5L, p1) != p1 ^ 4294967287UL) - ah;
      p = p1;
    }
  } else
    t[2][0] = fn3(fn3(q, q), 0x9CFB623FL);

  return p1;
}

static int fn8() {
  if (fn7(1))
    ;
}

int main() {
  fn8();
}
