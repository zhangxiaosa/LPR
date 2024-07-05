#include <stdio.h>

unsigned fn3(unsigned p1, unsigned p2) {
  return p1 - p2;
}

unsigned fn4(unsigned p1, unsigned p2) {
  return p1;
}

unsigned p;
int t;
short w;
unsigned ac = 1U;

int main() {
  int an;
  short ao;
  for (w = 3; w; w -= 1) {
    if (an == 250U) {
      t = ac || (an = w) == 0x294A85636008822DLLU;
      ao = 0xBCD1U;
      if ((fn3(ao, fn4(1U - an, 0xEU)) - t) & 1U)
        p = 1U;
    }
  }
  printf("checksum = %X\n", (unsigned)p);
  return 0;
}