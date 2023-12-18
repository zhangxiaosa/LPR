#include <stdint.h>

int g;
int h;

int fn4(int, int, int, int, int);

int fn5() {
  int ae = 0xA3L;
  int p1 = 0x9A5DL;
  int p2 = g;
  int p3 = 0x57638FF4L;
  int p4 = 0x30A04A8FL;
  int p5 = g;
  if (fn4(p1, p2, p3, p4, p5))
    ;
  return ae;
}

int fn4(int p1, int p2, int p3, int p4, int p5) {
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
