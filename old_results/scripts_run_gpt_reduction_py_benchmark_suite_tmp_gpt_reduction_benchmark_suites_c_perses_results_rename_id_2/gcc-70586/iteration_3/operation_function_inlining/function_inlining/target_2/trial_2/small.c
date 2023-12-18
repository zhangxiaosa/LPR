#include <iostream>

int o;
int p;
short q;
static unsigned r = 0x2A52;
unsigned s = 0x03F238A4;
unsigned t2;

int fn2(signed p1, unsigned p2) {
  return p1;
}

int fn3(int p1, int p2) {
  return p2 == 0 || p1 && p2 ? p1 : p1 % p2;
}

static int fn8() {
  q = 1;
  int optimized_ac = fn3(1, o);
  if (s) {
    unsigned af = 0;
    for (; 1; --1) {
    }
    for (; af <= 49; af = af + 8) {
      int ag_flat[240] = {1};
      unsigned ah;
      if (fn2(1, ag_flat[6] + 1 || 1 && (optimized_ac = fn3(1, 0xBC2AB98C)))) {
      } else {
        ah = optimized_ac;
        if (!r)
          break;
      }
      q = (0x60781BCD >= fn3(fn3(1, 1) > 0xB5, 1) != 1 ^ 4294967287) - ah;
      p = q;
      optimized_ac = fn3(0x7D765DB6, q);
    }
  } else
    t2 = fn3(fn3(0, 1), 0x9CFB623F);
}

int main() {
  fn8();
}