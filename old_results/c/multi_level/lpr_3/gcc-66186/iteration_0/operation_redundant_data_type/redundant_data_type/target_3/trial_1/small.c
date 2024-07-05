#include <stdint.h>

unsigned int g;
unsigned int h;

unsigned int fn4_original(int, unsigned short, unsigned short, unsigned int, unsigned short);

int fn5() {
  unsigned int ae = 0xA3L;
  unsigned int p1 = 0x9A5DL;
  unsigned int p2 = g;
  unsigned int p3 = 0x57638FF4L;
  unsigned short p4 = 0x30A04A8FL;
  unsigned int p5 = g;
  if (fn4_original(p1, p2, p3, p4, p5))
    ;
  return ae;
}

unsigned int fn4_original(int p1, unsigned short p2, unsigned short p3, unsigned int p4, unsigned short p5) {
  unsigned int ak[8];
  for (; p2 <= 7; p2 += 1)
    for (p4 = 0; p4 <= 7; p4 += 1)
      if (h < 0)
        for (p4 = 0; p4 <= 7; p4 += 1)
          if (ak[p3])
            break;
  return g;
}

int main() { fn5(); }
