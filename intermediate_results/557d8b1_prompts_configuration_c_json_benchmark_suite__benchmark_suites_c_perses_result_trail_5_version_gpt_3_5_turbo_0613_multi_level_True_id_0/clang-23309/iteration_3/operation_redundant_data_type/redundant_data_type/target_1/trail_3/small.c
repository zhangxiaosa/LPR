#include <stdio.h>

int fn1(int p1, int p2) {
  return p1 - p2;
}

int f;
unsigned g;
short a = 1;

int main() {
  int c;

  for (g = 3; g; g -= 1) {
    if (c == 250U) {
      a || (c = g);
      short d = 0xBCD1;

      if ((fn1(d, 1U - c) - a) & 1)
        f = 1;
    }
  }

  printf("checksum = %X\n", f);
  return 0;
}