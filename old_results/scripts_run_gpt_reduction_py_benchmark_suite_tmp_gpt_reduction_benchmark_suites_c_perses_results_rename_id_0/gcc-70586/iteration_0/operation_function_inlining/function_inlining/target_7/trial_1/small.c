#include <stdio.h>

typedef signed a;
typedef short b;
typedef int c;
typedef unsigned d;
typedef unsigned e;
typedef unsigned f;

a fn2(a p1, unsigned p2) { return p1; }

c fn3(c p1, c p2) { return p2 == 0 || p1 && p2 ? p1 : p1 % p2; }
e fn4(e p1, int p2) {}
f fn5(f p1, f p2) { return p1 + p2; }

a o;
a p;
b q;
static e r = 0x2A52L;
f s = 0x03F238A4L;
e t[7][1];
c u[6];
static e fn7(b);
static c fn8() {
  if (fn3(1, o)) {
    c ac;
    ac = fn3(1, o);
    if (s) {
      c ad;
      f af;
      for (; 1; --1)
        ;
      for (af = 0; af <= 49; af = af + 8) {
        c ag[8][6][5] = {1L};
        f ah;
        if (1 || 1 && fn3(1, 0xBC2AB98CL))
          ;
        else {
          e ai = ac;
          ah = ai;
          if (!r) {
            printf("l_1179=%lld\n", (long long)ad);
            break;
          }
        }
        1 = (0x60781BCDL >= fn3(fn3(0x809CL, 1) > 0xB5L, 1) != 1 ^ 4294967287UL) -
            ah;
        p = 1;
        ac = u[4] == 0 || 0x7D765DB6L && u[4] ? u[4] : u[4] % u[4];
      }
    } else {
      d aj[3];
      t[2][0] = fn3(fn3(aj[1], q), 0x9CFB623FL);
    }
  }
}
e fn7(b p1) { ... }

int main() { fn8(); }
