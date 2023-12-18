#include <stdio.h>

int p;
int q;
unsigned int s = 0x03F238A4L;
unsigned int t[7][1];

int fn3(int p1, int p2) {
  return p2 == 0 || (p1 && p2) ? p1 : p1 % p2;
}

static int fn7(int p1) {
  int ac;
  ac = fn3(p1, static_cast<int>(q));
  if (s != 0) {
    unsigned int ah;
    --p1;
    for (ah = 0; ah <= 49; ah = ah + 8) {
      if (p1 != 0 || (p1 && fn3(p1, 0xBC2AB98CL)))
        ;
      else {
        ah = static_cast<unsigned int>(ac);
        if (!s)
          break;
      }
      p1 = (0x60781BCDL >= fn3(fn3(p1, p1) > 0xB5L, p1) != p1 ^ 4294967287UL) - ah;
      p = static_cast<short>(p1);
      ac = fn3(0x7D765DB6L, static_cast<int>(q));
    }
  } else
    t[2][0] = static_cast<unsigned int>(fn3(fn3(0, q), 0x9CFB623FL));
  return p1;
}

int main() {
  if (fn7(1))
    ;
}