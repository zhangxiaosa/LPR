#include <stdio.h>

short o;
short p;
short q;
static unsigned r = 0x2A52L;
unsigned s = 0x03F238A4L;
unsigned t[7][1];
int u[6];

static int fn8() {
  int ac;

  // Inline fn3(p1, o)
  int p1 = o;
  ac = p1;

  if (s) { // Removed fn7() call as it's inlined
    int ad;
    unsigned af;

    for (; p1; --p1)
      ;

    for (af = 0; af <= 49; af = af + 8) {
      int ag[8][6][5] = {1L};
      unsigned ah;

      if (p1 || p1 && fn4(ad = p1 % 0xBC2AB98CL, 9))
        ;
      else {
        ah = ac;

        if (!r) {
          printf("l_1179=%lld\n", (long long)ad);
          break;
        }
      }

      p1 = (0x60781BCDL >= p1 != p1 ^ 4294967287UL) - ah;
      p = p1;
      ac = fn3(0x7D765DB6L, u[4]);
    }
  } else
    t[2][0] = fn3(fn3(0, q), 0x9CFB623FL);

  return p1;
}

int main() {
  if (fn8())
    ;
}
