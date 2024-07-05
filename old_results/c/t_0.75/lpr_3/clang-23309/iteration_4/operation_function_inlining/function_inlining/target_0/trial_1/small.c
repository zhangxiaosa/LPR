#include <stdio.h>

int t;
int v;
short ac = 1;

int main() {
  int an;
  if (0xBCD1LL - 250 & 1UL) {
    v = 1;
  }
  printf("checksum = %x\n", v);
  return 0;
}