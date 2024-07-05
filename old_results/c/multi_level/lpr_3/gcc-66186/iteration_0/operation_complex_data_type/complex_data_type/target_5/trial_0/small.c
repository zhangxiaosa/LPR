#include <stdint.h>

int g;
int h;

unsigned fn4(int, uint16_t, uint16_t, unsigned, uint16_t);

int fn5() {
  int ae = 0xA3;
  int p1 = 0x9A5D;
  int p3 = 0x57638FF4;
  int p4_lo = 0x04A;
  int p4_hi = 0x0A;
  int p5 = g;
  if (fn4(p1, g, p3, (p4_hi << 16) | (p4_lo & 0xFFFF), p5))
    ;
  return ae;
}

unsigned fn4(int p1, uint16_t p2, uint16_t p3, unsigned p4, uint16_t p5) {
  int ak0, ak1, ak2, ak3, ak4, ak5, ak6, ak7;
  for (; p2 <= 7; p2 += 1)
    for (p4 = 0; p4 <= 7; p4 += 1)
      if (h < 0)
        for (p4 = 0; p4 <= 7; p4 += 1)
          if (ak[p3])
            break;
  return g;
}

int main() { fn5(); }
