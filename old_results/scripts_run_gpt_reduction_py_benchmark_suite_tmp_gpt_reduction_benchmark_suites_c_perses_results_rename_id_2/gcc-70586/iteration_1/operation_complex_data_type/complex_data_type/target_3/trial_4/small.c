#include <stdio.h>

int o;
int p;
short q;
unsigned int r = 0x2A52;
unsigned int s = 0x03F238A4;
unsigned int t[7][1];

int fn2(int p1, unsigned int p2) { return p1; }

int fn3(int p1, int p2) { return p2 == 0 || p1 && p2 ? p1 : p1 % p2; }

unsigned int fn7(short p1) {
  int ac = fn3(p1, o);
  if (s != 0) {
    int ad;
    unsigned int af = 0;
    for (; p1 != 0; --p1) {
      // Loop body code
    }
    for (; af <= 49; af += 8) {
      int ag_flat[240] = {1};
      unsigned int ah;
      if (fn2(p1, ag_flat[6] + p1 || p1 && (ad = fn3(p1, 0xBC2AB98C)))) {
        // Code when condition is true
      } else {
        ah = ac;
        if (r == 0) {
          printf("l_1179=%u\n", (unsigned int)ad);
          break;
        }
      }
      p1 =
          (0x60781BCD >= fn3(fn3(p1, p1) > 0xB5, p1) != p1 ^ 4294967287UL) - ah;
      p = p1;
      ac = fn3(0x7D765DB6L, p1);
    }
  } else
    t[2][0] = fn3(fn3(0, q), 0x9CFB623F);
  return p1;
}

void fn8() {
  if (fn7(1) != 0) {
    // Code when condition is true
  }
}

int main() { fn8(); }
