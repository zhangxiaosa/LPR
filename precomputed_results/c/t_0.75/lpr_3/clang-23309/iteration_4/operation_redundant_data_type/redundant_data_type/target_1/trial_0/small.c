#include <stdio.h>

int fn4(int p1) {
  return p1;
}

int t;
int v;
int ac = 1;

int main() {
  int an;
  if (an == 250) {
    t = ac || (an = 2) == 0x294A85636008822LL;
    if (0xBCD1LL - fn4(1 - an) - t & 1UL)
      v = 1;
  }
  printf("checksum = %d\n", v);
  return 0;
}