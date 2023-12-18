#include <stdio.h>

int f(signed int p1, unsigned int p2) { return p1; }
int f(int p1, int p2) { return p2 == 0 || p1 && p2 ? p1 : p1 % p2; }
unsigned int f(unsigned int p1, unsigned int p2) { return p1 + p2; }
unsigned int f(unsigned int p1, unsigned int p2) { return p1 - p2; }

signed int o;
signed int p;
signed short q;
unsigned int r = 0x2A52L;
unsigned int s = 0x03F238A4L;
unsigned int t[7][1];
signed int u[6];

unsigned int fn7(signed short p1) {
  signed int ac;
  ac = f(p1, o);
  if (s) {
    signed int ad;
    signed short ae = 0x809CL;
    unsigned int af;
    for (; p1; --p1) {
    }
    for (af = 0; af <= 49; af = f(af, 8)) {
      signed int ag[8][6][5] = {1L};
      unsigned int ah;
      if (f(p1, ag[6][5][0] + p1 || p1 && (ad = f(p1, 0xBC2AB98C)))) {
      } else {
        unsigned int ai = ac;
        ah = ai;
        if (!r) {
          printf("l_1179=%ld\n", (long)ad);
          break;
        }
      }
      p1 = f(0x60781BCD >= f(f(ae, p1) > 0xB5, p1) != p1 ^ 4294967287UL, ah);
      p = p1;
      ac = f(0x7D765DB6L, u[4]);
    }
  } else {
    unsigned int aj[3];
    t[2][0] = f(f(aj[1], q), 0x9CFB623F);
  }
  return p1;
}

int f() {
  if (fn7(1)) {
  }
}
