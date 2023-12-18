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

    // Unrolled iteration 1
    c ag_1[8][6][5] = {1L};
    f ah_1;
    if (fn2(p1, ag_1[6][5][0] + p1 || p1 && fn4(ad = fn3(p1, 0xBC2AB98CL), 9)))
      ;
    else {
      e ai_1 = ac;
      ah_1 = ai_1;
      if (!r) {
        printf("l_1179=%lld\n", (long long)ad);
        break;
      }
    }
    p1 = fn6(0x60781BCDL >= fn3(fn3(ae, p1) > 0xB5L, p1) != p1 ^ 4294967287UL, ah_1);
    p = p1;
    ac = fn3(0x7D765DB6L, u[4]);

    // Unrolled iteration 2
    c ag_2[8][6][5] = {1L};
    f ah_2;
    if (fn2(p1, ag_2[6][5][0] + p1 || p1 && fn4(ad = fn3(p1, 0xBC2AB98CL), 9)))
      ;
    else {
      e ai_2 = ac;
      ah_2 = ai_2;
      if (!r) {
        printf("l_1179=%lld\n", (long long)ad);
        break;
      }
    }
    p1 = fn6(0x60781BCDL >= fn3(fn3(ae, p1) > 0xB5L, p1) != p1 ^ 4294967287UL, ah_2);
    p = p1;
    ac = fn3(0x7D765DB6L, u[4]);

    // Unrolled iteration 3
    c ag_3[8][6][5] = {1L};
    f ah_3;
    if (fn2(p1, ag_3[6][5][0] + p1 || p1 && fn4(ad = fn3(p1, 0xBC2AB98CL), 9)))
      ;
    else {
      e ai_3 = ac;
      ah_3 = ai_3;
      if (!r) {
        printf("l_1179=%lld\n", (long long)ad);
        break;
      }
    }
    p1 = fn6(0x60781BCDL >= fn3(fn3(ae, p1) > 0xB5L, p1) != p1 ^ 4294967287UL, ah_3);
    p = p1;
    ac = fn3(0x7D765DB6L, u[4]);
    // ... Repeat for unrolled iterations 4 to 6
  } else {
    d aj[3];
    t[2][0] = fn3(fn3(aj[1], q), 0x9CFB623FL);
  }
  return p1;
}

int main() {
  if (fn7(1))
    ;
}