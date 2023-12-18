#include <stdio.h>

int p;
unsigned r = 0x2A52L;
unsigned s = 0x03F238A4L;

int fn3(int p1_arg, int p2) {
  return p2 == 0 || (p1_arg && p2) ? p1_arg : p1_arg % p2;
}

static unsigned fn7_original(short);
unsigned fn7_original(short p1_arg) {
  int ai;
  unsigned af;
  int ag[8][6][5] = {1L};
  unsigned ah;
  ai = p1_arg && p ? p1_arg : p1_arg % p; // Constant propagation based on fn3 conditions

  if (s) {
    --p1_arg;
    for (af = 0; af <= 49; af = af + 8) {
      if (p1_arg, ag[6][5][0] + p1_arg || p1_arg && (ai = p1_arg && 0xBC2AB98CL, 9))
        ;
      else {
        ah = ai;
        if (!r)
          break;
      }
      p1_arg =
          (0x60781BCDL >= fn3(fn3(0x809CL, p1_arg) > 0xB5L, p1_arg) != p1_arg ^
           4294967287UL) -
          ah;
      p = p1_arg;
      ai = p1_arg && p ? p1_arg : p1_arg % p; // Copy propagation based on constant value
    }
  } else
    p = p1_arg && p ? p1_arg : p1_arg % p; // Copy propagation based on constant value

  return p1_arg;
}

int main() {
  if (fn7_original(1))
    ;
}
