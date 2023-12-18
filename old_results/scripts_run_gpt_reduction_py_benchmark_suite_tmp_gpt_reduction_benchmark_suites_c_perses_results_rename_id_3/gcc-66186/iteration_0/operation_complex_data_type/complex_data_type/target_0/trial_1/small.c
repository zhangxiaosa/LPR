#include <stdint.h>

int g;
int h;
unsigned fn4(int, uint16_t, uint16_t, unsigned, uint16_t);

int fn5() {
  int ae = 0xA3;
  int p1 = 0x9A5D;
  int p2 = g;
  int p3 = 0x57638FF4;
  uint16_t p4 = 0x30A04A8F;
  int p5 = g;

  if (fn4(p1, p2, p3, p4, p5))
    ;

  return ae;
}

unsigned fn4(int p1, uint16_t p2, uint16_t p3, unsigned p4, uint16_t p5) {
  int16_t ak0;
  int16_t ak1;
  int16_t ak2;
  int16_t ak3;
  int16_t ak4;
  int16_t ak5;
  int16_t ak6;
  int16_t ak7;

  for (; p2 <= 7; p2 += 1)
    for (p4 = 0; p4 <= 7; p4 += 1)
      if (h < 0)
        for (p4 = 0; p4 <= 7; p4 += 1)
          if (p3 >= 0 && p3 <= 7)
            break;

  return g;
}

int main() {
  fn5();
}
