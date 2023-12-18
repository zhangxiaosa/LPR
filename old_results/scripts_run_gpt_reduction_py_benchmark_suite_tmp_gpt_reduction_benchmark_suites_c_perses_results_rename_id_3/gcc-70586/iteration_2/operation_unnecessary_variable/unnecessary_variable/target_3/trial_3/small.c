#include <stdio.h>

short p;
short q;
unsigned s = 0x03F238A4L;
unsigned t[7][1];
short u[6];
short fn2(short p1, unsigned p2) { return p1; }
int fn3(int p1, int p2) { return p2 == 0 || p1 && p2 ? p1 : p1 % p2; }
static short fn7(short p1) {
  int ac;
  ac = fn3(p1, q);
  if (s) {
    int ad;
    for (; p1; --p1)
      ;
    for (unsigned ah = 0; ah <= 49; ah = ah + 8) {
      if (fn2(p1, p1 + p1 || p1 && (ad = fn3(p1, 0xBC2AB98CL))))
        ;
      else {
        if (!s) {
          printf("l_1179=%d\n", ad);
          break;
        }
      }
      p1 = (0x60781BCDL >= fn3(fn3(p1, p1) > 0xB5L, p1) != p1 ^ 4294967287UL) - ac;
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
