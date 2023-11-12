#include <stdio.h>

int fn1(int p1, int p2) {
  return p1 - p2;
}

int fn2(int p1, int p2) {
  return p1;
}

unsigned int e;
int f;
int g;
short a = 1;

int main() {
  int c;
  for (g = 3; g; g -= 1) {
    if (c = 250) {
      a || (c = g);
      int d = 0xBCD1;
      if ((fn1(d, fn2(1 - c, 0xEC)) - a) & 1)
        f = 1;
    }
  }
  e = (int)f;
  printf("checksum = %x\n", e);
  return 0;
}
