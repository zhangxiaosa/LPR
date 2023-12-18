#include <stdio.h>

unsigned p;
unsigned q;
unsigned s = 0x03F238A4L;
unsigned t[7][1];
unsigned u[6];

unsigned fn2(unsigned p1, unsigned p2) { return p1; }

int fn3(int p1, int p2) { return p2 == 0 || p1 && p2 ? p1 : p1 % p2; }

static unsigned fn7(unsigned p1) {
  unsigned ac;
  ac = fn3(p1, q);
  if (s) {
    int ad;
    unsigned ah;
    for (; p1; --p1)
      ;
    for (ah = 0; ah <= 49; ah = ah + 8) {
      unsigned ag[8][6][5] = {1L};
      unsigned ah;
      if (fn2(p1, ag[6][5][0] + p1 || p1 && (ad = fn3(p1, 0xBC2AB98CL))))
        ;
      else {
        ah = ac;
        if (!s) {
          printf("l_1179=%d\n", ad);
          break;
        }
      }
      p1 = (0x60781BCDL >= fn3(fn3(p1, p1) > 0xB5L, p1) != p1 ^ 4294967287UL) -
           ah;
      p = p1;
      ac = fn3(0x7D765DB6L, u[4]);
    }
  } else
    t[2][0] = fn3(fn3(0, q), 0x9CFB623FL);
  return p1;
}

static void fn8() {
  if (fn7(1))
    ;
}

int main() { fn8(); }
