
#include <stdio.h>

int fn2(int p1, int p2) {
  return p1 - p2;
}

int fn6(int p1, int p2) {
  return p2;
}

int w;
int ac = 1;
int fn10(int p2) {
  int an = 250;
  p2 = ac || (an = w) == 0x294A85636008822D;
  return fn2((short)0xBCD1 - (fn6(1, an) & 1) << 8, p2) & 1;
}

int main() {
  printf("checksum = %X\n", fn10(0));
  return 0;
}
