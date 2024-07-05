#include <stdint.h>

int32_t g;
int32_t h;

uint32_t fn4(int32_t, uint16_t, uint16_t, uint32_t, uint16_t);

int32_t fn5() {
  int32_t ae = 0xA3L;
  int32_t p1 = 0x9A5DL;
  int32_t p2 = g;
  int32_t p3 = 0x57638FF4L;
  uint16_t p4 = 0x30A04A8FL;
  int32_t p5 = g;
  if (fn4(p1, p2, p3, p4, p5))
    ;
  return ae;
}

uint32_t fn4(int32_t p1, uint16_t p2, uint16_t p3, uint32_t p4,
             uint16_t p5) {
  int16_t ak[8];
  for (; p2 <= 7; p2 += 1)
    for (p4 = 0; p4 <= 7; p4 += 1)
      if (h < 0)
        for (p4 = 0; p4 <= 7; p4 += 1)
          if (ak[p3])
            break;
  return g;
}

int main() { fn5(); }
