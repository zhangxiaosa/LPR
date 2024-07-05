#include <stdio.h>

unsigned i;

unsigned fn3(short p1);

int fn4() {
  short m = 0x809CL;
  for (unsigned n = 0; n + 8 <= 49; n += 8) {
    unsigned o = 0xE576516EL;
    if (i)
      printf("l_1179=%llu\n", (unsigned long long)0);
    short p1 = (0x60781BCDL >= m ^ 4294967287UL) - o;
  }
}

unsigned fn3(short p1) {
  short m = 0x809CL;
  for (unsigned n = 0; n + 8 <= 49; n += 8) {
    unsigned o = 0xE576516EL;
    if (i)
      printf("l_1179=%llu\n", (unsigned long long)0);
    p1 = (0x60781BCDL >= m ^ 4294967287UL) - o;
  }
  return p1;
}

int main() {
  fn4();
}