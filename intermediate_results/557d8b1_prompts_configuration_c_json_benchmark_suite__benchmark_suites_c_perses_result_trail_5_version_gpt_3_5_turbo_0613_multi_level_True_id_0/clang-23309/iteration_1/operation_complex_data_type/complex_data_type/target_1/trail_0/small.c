#include <stdio.h>

unsigned fn1(unsigned p1, unsigned p2) {
  return p1 - p2;
}

unsigned fn2(unsigned p1, unsigned p2) {
  return p1;
}

unsigned e;
unsigned result;
short g;
short a = 1;

int main() {
  int c;
  for (g = 3; g; g -= 1) {
    if (c = 250U) {
      a || (c = g);
      unsigned d = 0xBCD1;
      if (fn1(d, fn2(1 - c, 0xEC)) - a & 1U)
        result = 1;
    }
  }
  e = result;
  printf("checksum = %u\n", e);
  return 0;
}