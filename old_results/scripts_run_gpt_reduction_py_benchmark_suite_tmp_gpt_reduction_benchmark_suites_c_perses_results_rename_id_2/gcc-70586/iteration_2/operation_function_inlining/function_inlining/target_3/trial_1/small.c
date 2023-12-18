#include <stdio.h>

int o;
int p;
short q;
static unsigned r = 0x2A52L;
unsigned s = 0x03F238A4L;
unsigned t[7][1];

int fn2(signed p1, unsigned p2) { return p1; }

int fn3(int p1, int p2) { return p2 == 0 || (p1 && p2) ? p1 : p1 % p2; }

static int fn8() {
  int ac = fn3(1, o);  // Inline fn7(1)

  if (s) {
    unsigned af = 0;

    for (; q; --q) {
      // Loop body
    }

    for (; af <= 49; af = af + 8) {
      int ag_flat[240] = {1L};
      unsigned ah;

      if (fn2(q, ag_flat[6] + q || q && (ac = fn3(q, 0xBC2AB98C)))) {
        // Condition
      } else {
        ah = ac;
        if (!r)
          break;
      }

      // Calculation
      q = (0x60781BCD >= fn3(fn3(q, q) > 0xB5, q) != q ^ 4294967287UL) - ah;
      p = q;
      ac = fn3(0x7D765DB6L, q);
    }
  } else {
    t[2][0] = fn3(fn3(0, q), 0x9CFB623F);
  }

  return q;
}

int main() {
  fn8();
  return 0;
}