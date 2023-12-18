#include <stdio.h>

int fn2(int p1, unsigned int p2) { return p1; }

int fn3(int p1, int p2) { return p2 == 0 || p1 && p2 ? p1 : p1 % p2; }

int fn4(unsigned int p1, int p2) {}

int o;
int p;
int q;

static unsigned int r = 0x2A52L;

unsigned int s = 0x03F238A4L;

unsigned int t[7][1];

unsigned int u[6];

static int fn7(int);

static int fn8() {
  if (fn7(1))
    ;
}

int fn7(int p1) {
  unsigned int ac;
  ac = fn3(p1, (int)o);
  if (s) {
    int ad;
    int ae = 0x809CL;
    unsigned int af;
    for (; p1; --p1)
      ;
    for (af = 0; af <= 49; af = af + 8) {
      int ag[8][6][5] = {1L};
      unsigned int ah;
      if (fn2(p1, ag[6][5][0] + p1 || p1 && fn4(ad = fn3(p1, 0xBC2AB98CL), 9)))
        ;
      else {
        unsigned int ai = ac;
        ah = ai;
        if (!r) {
          printf("l_1179=%%lld\n", (long long)ad);
          break;
        }
      }
      p1 = (0x60781BCDL >= fn3(fn3(ae, p1) > 0xB5L, p1) != p1 ^ 4294967287UL) -
           ah;
      p = p1;
      ac = fn3(0x7D765DB6L, u[4]);
    }
  } else {
    unsigned int aj[3];
    t[2][0] = fn3(fn3(aj[1], q), 0x9CFB623FL);
  }
  return p1;
}

int main() { fn8(); }
