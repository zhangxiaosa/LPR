#include <stdio.h>

short q;
static unsigned r = 0x2A52L;
unsigned s = 0x03F238A4L;

int fn2(short p1, unsigned p2) { return p1; }

int fn3(int p1, int p2) { return p2 == 0 || p1 && p2 ? p1 : p1 % p2; }

static int fn7(short p1) {
  int ac = fn3(p1, q);

  if (s) {
    unsigned ah;

    for (; p1; --p1)
      ;

    for (ah = 0; ah <= 49; ah = ah + 8) {
      int ag[8][6][5] = {1L};
      unsigned ah;

      if (fn2(p1, ag[6][5][0] + p1 || p1 && 0))
        ;
      else {
        ah = ac;
        if (!0) {
          printf("l_1179=%lld\n", (long long)0);
          break;
        }
      }

      p1 = (0x60781BCDL >= fn3(fn3(p1, p1) > 0xB5L, p1) != p1 ^ 4294967287UL) - ah;
    }

  } else
    ;

  return p1;
}

static int fn8() {
  if (fn7(1))
    ;
}

int main() { fn8(); }
