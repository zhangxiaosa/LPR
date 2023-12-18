#include <stdio.h>

int fn2(int p1, unsigned p2) { return p1; }

int fn3(int p1, int p2) { return p2 == 0 || p1 && p2 ? p1 : p1 % p2; }

unsigned fn4(unsigned p1, int p2) {}

unsigned fn5(unsigned p1, unsigned p2) { return p1 + p2; }

unsigned fn6(unsigned p1, unsigned p2) { return p1 - p2; }

int o;
int p;
short q;
static unsigned r = 0x2A52L;
unsigned s = 0x03F238A4L;
unsigned t2;
int u[6];
static unsigned fn7(short);
unsigned fn7(short p1) {
  int ai;
  ai = p1;
  if (s) {
    unsigned af;
    for (; p1; --p1)
      ;
    for (af = 0; af <= 49; af = af + 8) {
      int ag[8][6][5] = {1L};
      unsigned ah;
      if (p1 && ag[6][5][0] + p1 || p1 && fn4(ai = p1, 9))
        ;
      else {
        ah = ai;
        if (!r) {
          printf("l_1179=%lld\n", (long long)ai);
          break;
        }
      }
      p1 = 0x60781BCDL >= p1 > 0xB5L != p1 ^ 4294967287UL ? ah : ai;
      p = p1;
      ai = 0x7D765DB6L;
    }
  } else {
    t2 = q;
  }
  return p1;
}

int main() {
  if (fn7(1))
    ;
}