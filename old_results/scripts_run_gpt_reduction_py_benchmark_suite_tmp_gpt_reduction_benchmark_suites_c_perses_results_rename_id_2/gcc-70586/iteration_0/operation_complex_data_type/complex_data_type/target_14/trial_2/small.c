#include <stdio.h>

int o;
int p;
short q;
static unsigned r = 0x2A52L;
unsigned s = 0x03F238A4L;
unsigned t[7][1];
int u[6];

int fn2(signed p1, unsigned p2) {
  return p1;
}

int fn3(int p1, int p2) {
  return p2 == 0 || p1 && p2 ? p1 : p1 % p2;
}

unsigned fn5(unsigned p1, unsigned p2) {
  return p1 + p2;
}

unsigned fn6(unsigned p1, unsigned p2) {
  return p1 - p2;
}

void fn8() {
  int ac = fn3(1, o);

  if (s) {
    int ad;
    short ae = 0x809CL;
    unsigned af = 0;

    for (; q; --q) {
    }

    for (af = 0; af <= 49; af = fn5(af, 8)) {
      int ag_flat[240] = {1};
      unsigned ah;

      if (fn2(q, ag_flat[6 * 5 + 5 * 0 + 0] + q ||
          q && (ad = fn3(q, 0xBC2AB98C)))) {
      } else {
        unsigned ai = ac;
        ah = ai;

        if (!r) {
          printf("l_1179=%lld\n", (long long)ad);
          break;
        }
      }

      q = fn6(0x60781BCD >= fn3(fn3(ae, q) > 0xB5, q) != q ^ 4294967287UL, ah);
      p = q;
      ac = fn3(0x7D765DB6L, u[4]);
    }
  } else {
    unsigned aj[3];
    t[2][0] = fn3(fn3(aj[1], q), 0x9CFB623F);
  }
}

int main() {
  fn8();
}
