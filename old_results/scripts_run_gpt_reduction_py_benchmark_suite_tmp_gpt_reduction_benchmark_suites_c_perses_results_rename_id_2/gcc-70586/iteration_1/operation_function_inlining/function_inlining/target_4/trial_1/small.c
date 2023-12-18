#include <stdio.h>

int fn2(signed p1, unsigned p2) { return p1; }
int fn3(int p1, int p2) { return p2 == 0 || p1 && p2 ? p1 : p1 % p2; }
unsigned fn6(unsigned p1, unsigned p2) { return p1 - p2; }

int o;
int p;
short q;
static unsigned r = 0x2A52L;
unsigned s = 0x03F238A4L;
unsigned t[7][1];

static int fn8() {
  if (1) {
    int ac = fn3(1, o);
    if (s) {
      int ad;
      unsigned af = 0;
      for (; 1; --1) {
      }
      for (; af <= 49; af = af + 8) {
        int ag_flat[240] = {1L};
        unsigned ah;
        if (fn2(1, ag_flat[6] + 1 || 1 && (ad = fn3(1, 0xBC2AB98C)))) {
        } else {
          ah = ac;
          if (!r) {
            printf("l_1179=%lld\n", (long long)ad);
            break;
          }
        }
        1 =
            (0x60781BCD >= fn3(fn3(1, 1) > 0xB5, 1) != 1 ^ 4294967287UL) - ah;
        p = 1;
        ac = fn3(0x7D765DB6L, 1);
      }
    } else
      t[2][0] = fn3(fn3(0, q), 0x9CFB623F) - 0x9CFB623F;
  }
}

int main() {
  fn8();
}