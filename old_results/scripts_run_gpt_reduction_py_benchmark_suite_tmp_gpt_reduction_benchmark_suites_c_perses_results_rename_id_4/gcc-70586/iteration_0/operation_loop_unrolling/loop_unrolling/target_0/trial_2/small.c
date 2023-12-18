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
f fn6(f p1, f p2) { return p1 - p2; }

a o;
a p;
b q;
static e r = 0x2A52L;
f s = 0x03F238A4L;
e t[7][1];
c u[6];

static e fn7(b);
e fn7(b p1) {
  c ac;
  ac = fn3(p1, o);
  if (s) {
    c ad;
    b ae = 0x809CL;
    f af;
    if (p1 % 2 == 1) {
      // Execute the loop body once
      // Separate handling
      ;
    }

    // Unrolled loop
    f ah;
    while (p1 > 1) {
      // Loop body copy 1
      c ag[8][6][5] = {1L};
      if (fn2(p1, ag[6][5][0] + p1 || p1 && fn4(ad = fn3(p1, 0xBC2AB98CL), 9)))
        ;
      else {
        e ai = ac;
        ah = ai;
        if (!r) {
          printf("l_1179=%lld\n", (long long)ad);
          break;
        }
      }
      p1 = fn6(0x60781BCDL >= fn3(fn3(ae, p1) > 0xB5L, p1) != p1 ^ 4294967287UL, ah);
      p = p1;
      ac = fn3(0x7D765DB6L, u[4]);

      // Loop body copy 2
      c ag2[8][6][5] = {1L};
      if (fn2(p1, ag2[6][5][0] + p1 || p1 && fn4(ad = fn3(p1, 0xBC2AB98CL), 9)))
        ;
      else {
        e ai2 = ac;
        ah = ai2;
        if (!r) {
          printf("l_1179=%lld\n", (long long)ad);
          break;
        }
      }
      p1 = fn6(0x60781BCDL >= fn3(fn3(ae, p1) > 0xB5L, p1) != p1 ^ 4294967287UL, ah);
      p = p1;
      ac = fn3(0x7D765DB6L, u[4]);

      // Loop body copy 3
      c ag3[8][6][5] = {1L};
      if (fn2(p1, ag3[6][5][0] + p1 || p1 && fn4(ad = fn3(p1, 0xBC2AB98CL), 9)))
        ;
      else {
        e ai3 = ac;
        ah = ai3;
        if (!r) {
          printf("l_1179=%lld\n", (long long)ad);
          break;
        }
      }
      p1 = fn6(0x60781BCDL >= fn3(fn3(ae, p1) > 0xB5L, p1) != p1 ^ 4294967287UL, ah);
      p = p1;
      ac = fn3(0x7D765DB6L, u[4]);

      p1 /= 2;
    }

    // Handle remaining iterations
    while (p1) {
      // Loop body
      c ag[8][6][5] = {1L};
      if (fn2(p1, ag[6][5][0] + p1 || p1 && fn4(ad = fn3(p1, 0xBC2AB98CL), 9)))
        ;
      else {
        e ai = ac;
        ah = ai;
        if (!r) {
          printf("l_1179=%lld\n", (long long)ad);
          break;
        }
      }
      p1 = fn6(0x60781BCDL >= fn3(fn3(ae, p1) > 0xB5L, p1) != p1 ^ 4294967287UL, ah);
      p = p1;
      ac = fn3(0x7D765DB6L, u[4]);
      --p1;
    }
  } else {
    d aj[3];
    t[2][0] = fn3(fn3(aj[1], q), 0x9CFB623FL);
  }

  return p1;
}

int main() {
  if (fn7(1))
    ;
  return 0;
}
