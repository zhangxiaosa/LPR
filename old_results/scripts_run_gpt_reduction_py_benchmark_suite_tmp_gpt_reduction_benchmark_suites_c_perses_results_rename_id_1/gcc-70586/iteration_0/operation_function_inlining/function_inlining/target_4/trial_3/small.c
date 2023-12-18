typedef signed a;
typedef int c;
typedef unsigned e;
a o;
a p;
static e r = 0x2A52L;
e t[7][1];
c u[6];

a fn1(a p1, a p2) { return p1 + p2; }

a fn2(a p1, unsigned p2) { return p1; }

c fn3(c p1, c p2) { return p2 == 0 || p1 && p2 ? p1 : p1 % p2; }

e fn4(e p1, int p2) {}

a fn7(a p1) {
  c ac;
  ac = fn3(p1, o);
  if (s) {
    c ad;
    a ae = 0x809CL;
    a af;
    for (; p1; --p1)
      ;
    for (af = 0; af <= 49; af = (af + 8)) {
      c ag[8][6][5] = {1L};
      a ah;
      if (p1 && (ag[6][5][0] + p1 || p1 && fn4(ad = fn3(p1, 0xBC2AB98CL), 9)))
        ;
      else {
        e ai = ac;
        ah = ai;
        if (!r) {
          printf("l_1179=%lld\n", (long long)ad);
          break;
        }
      }
      p1 = (0x60781BCDL >= fn3(fn3(ae, p1) > 0xB5L, p1) != p1 ^ (4294967287UL - ah));
      p = p1;
      ac = fn3(0x7D765DB6L, u[4]);
    }
  } else {
    e aj[3];
    t[2][0] = fn3(fn3(aj[1], q), 0x9CFB623FL);
  }
  return p1;
}

int main() {}