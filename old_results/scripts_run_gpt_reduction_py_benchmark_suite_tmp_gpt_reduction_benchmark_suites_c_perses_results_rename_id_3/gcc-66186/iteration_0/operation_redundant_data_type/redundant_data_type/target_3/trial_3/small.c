#include <stdint.h>

int g;
int h;

int fn4(int, int, int, int, int);

int fn5() {
  int f = 0xA3L;
  int f1 = 0x9A5DL;
  int f2 = g;
  int f3 = 0x57638FF4L;
  int f4 = 0x30A04A8FL;
  int f5 = g;
  if (fn4(f1, f2, f3, f4, f5))
    ;
  return f;
}

int fn4(int f1, int f2, int f3, int f4, int f5) {
  int ak[8];
  for (; f2 <= 7; f2 += 1)
    for (f4 = 0; f4 <= 7; f4 += 1)
      if (h < 0)
        for (f4 = 0; f4 <= 7; f4 += 1)
          if (ak[f3])
            break;
  return g;
}

int main() {
  fn5(void);
}
