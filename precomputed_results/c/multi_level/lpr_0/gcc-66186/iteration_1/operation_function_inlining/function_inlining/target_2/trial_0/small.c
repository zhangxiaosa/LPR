#include <stdio.h>

int g;

unsigned short fn2(int p1, unsigned short p2, unsigned p3);

unsigned fn4(int p1, unsigned short p2, unsigned short p3, unsigned p4,
             unsigned short p5) {
  short ak[8];
  for (unsigned short p2 = 0; p2 <= 7; p2 += 1)
    for (unsigned p4 = 0; p4 <= 7; p4 += 1)
      if (g < 0)
        for (unsigned p4 = 0; p4 <= 7; p4 += 1)
          if (ak[0x57638FF4L])
            break;
  return g;
}

int fn5() {
  short ak[8];
  for (unsigned short p2 = 0; p2 <= 7; p2 += 1)
    for (unsigned p4 = 0; p4 <= 7; p4 += 1)
      if (g < 0)
        for (unsigned p4 = 0; p4 <= 7; p4 += 1)
          if (ak[0x57638FF4L])
            break;
  return 0;
}

int main() {
  fn5();
}