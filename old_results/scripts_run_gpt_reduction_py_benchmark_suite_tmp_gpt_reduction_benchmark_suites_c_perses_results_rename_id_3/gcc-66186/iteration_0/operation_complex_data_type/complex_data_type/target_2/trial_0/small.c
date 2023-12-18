#include <stdint.h>

int g;
int h;

unsigned fn4(int, uint16_t, uint16_t, unsigned, uint16_t);

int fn5() {
  int ae = 0xA3L;
  int p1 = 0x9A5DL;
  int p2_new = g;  // Modified line
  int p3 = 0x57638FF4L;
  uint16_t p4 = 0x30A04A8FL;
  int p5 = g;
  if (fn4(p1, p2_new, p3, p4, p5))  // Modified line
    ;
  return ae;
}

unsigned fn4(int p1, uint16_t p2_new, uint16_t p3, unsigned p4, uint16_t p5) {  // Modified line
  int16_t ak[8];
  for (; p2_new <= 7; p2_new += 1)  // Modified line
    for (p4 = 0; p4 <= 7; p4 += 1)
      if (h < 0)
        for (p4 = 0; p4 <= 7; p4 += 1)
          if (ak[p3])
            break;
  return g;
}

int main() { fn5(); }
