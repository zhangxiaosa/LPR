#include <stdio.h>

int o;
int p;
int q;
static int r = 0x2A52L;
int s = 0x03F238A4L;
int t[7][1];
int u[6];
int fn2(int p1, int p2) { return p1; }
int fn3(int p1, int p2) { return p2 == 0 || p1 && p2 ? p1 : p1 % p2; }
int fn4(int p1, int p2) {}
static int fn7(int);
static int fn8() {
  if (fn7(1))
    ;
}
int fn7(int p1) {
  int ac;
  ac = fn3(p1, o);
  if (s) {
    int ad;
    int af;
    for (; p1; --p1)
      ;
    for (af = 0; af <= 49; af = af + 8) {
      int ag[8][6][5] = {1L};
      int ah;
      if (fn2(p1, ag[6][5][0] + p1 || p1 && fn4(ad = fn3(p1, 0xBC2AB98CL), 9)))
        ;
      else {
        ah = ac;
        if (!r) {
          printf("l_1179=%lld\n", (long long)ad);
          break;
        }
      }
      p1 = (0x60781BCDL >= fn3(fn3(p1, p1) > 0xB5L, p1) != p1 ^ 4294967287UL) -
           ah;
      p = p1;
      ac = fn3(0x7D765DB6L, u[4]);
    }
  } else
    t[2][0] = fn3(fn3(0, q), 0x9CFB623FL);
  return p1;
}

int main() { fn8(); }
