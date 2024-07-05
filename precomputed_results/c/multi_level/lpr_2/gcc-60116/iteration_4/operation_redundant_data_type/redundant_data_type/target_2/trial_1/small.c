#include <stdio.h>

int fn2(int p1, int p2) { return p1 && p2 ? p1 : p1 % p2; }

long long ak;

int main() {
  ak = 0;
  for (short ah = 0; ah <= 3; ah += 1) {
    unsigned assigned_value = ~((fn2(0, 1L) != 0) + ak) && 0x57L;
    if (0xDC6F3D13L) {
      ak = 0x41AEA787L;
    } else {
      ak = assigned_value;
    }
  }
  printf("checksum = %X\n", 0x41AEA787L);
  return 0;
}