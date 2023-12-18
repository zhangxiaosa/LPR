#include <stdio.h>

typedef short b;
typedef int c;
typedef unsigned d;
typedef unsigned e;
typedef unsigned f;

signed fn2(signed p1, unsigned p2) { return p1; }
c fn3(c p1, c p2) { return p2 == 0 || p1 && p2 ? p1 : p1 % p2; }
f fn5(f p1, f p2) { return p1 + p2; }
f fn6(f p1, f p2) { return p1 - p2; }

signed o;
signed p;
b q;
static e r = 0x2A52L;
f s = 0x03F238A4L;
e t[7][1];
c u[6];

static e fn7(b p1) {
  c ac;
  ac = fn3(p1, o);
  if (s) {
    c ad;
    b ae = 0x809CL;
    f af;
    for (; p1; --p1) {
    }
    for (af = 0; af <= 49; af = fn5(af, 8)) {
      c ag[8][6][5] = {1L};
      f ah;
      if (fn2(p1, ag[6][5][0] + p1 || p1 && (ad = fn3(p1, 0xBC2AB98CL)))) {
      } else {
        e ai = ac;
        ah = ai;
        if (!r) {
          printf("l_1179=%lld\n", (long long)ad);
          break;
        }
      }
      p1 = fn6(0x60781BCDL >= fn3(fn3(ae, p1) > 0xB5L, p1) != p1 ^ 4294967287UL,
               ah);
      p = p1;
      ac = fn3(0x7D765DB6L, u[4]);
    }
  } else {
    d aj[3];
    t[2][0] = fn3(fn3(aj[1], q), 0x9CFB623FL);
  }
  return p1;
}

static c fn8() {
  if (fn7(1)) {
  }
}

int main() { fn8(); }
