#include <stdio.h>

long fn1(long p1, long p2) {
  return p1 - p2;
}

unsigned fn2(unsigned p1, unsigned p2) {
  return p1;
}

unsigned e;
long f = 0;
short g;
short a = 1;

void optimizeF() {
  short h;

  for (g = 3; g; g -= 1) {
    unsigned c = 250;
    if (c == 250) {
      h = (c == g) == 0x294A85636008822;
      short d = 0xBCD1;
      if (fn1(d, fn2(1 - c, 0xEC)) - h & 1) {
        f = 1;
      }
    }
  }
}

int main() {
  optimizeF();
  e = f;
  printf("checksum = %X\n", e);
  return 0;
}