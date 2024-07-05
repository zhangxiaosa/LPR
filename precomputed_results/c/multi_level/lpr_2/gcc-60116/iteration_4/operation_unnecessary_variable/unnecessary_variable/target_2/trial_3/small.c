#include <stdio.h>

int fn2(int p1, int p2) { return p1 && p2 ? p1 : p1 % p2; }

int q;
unsigned w = 0xDC6F3D13L;
long long ag3;
short ah;
long long ak;
unsigned ao;
unsigned original_data_type;

int main() {
  ak = 0;
  for (ah = 0; ah <= 3; ah += 1) {
    // unsigned assigned_value = ~((fn2(original_data_type, 1L) != 0) + ak) && 0x57L;
    if (w) {
      q = 0x41AEA787L;
      ag3 = (fn2(original_data_type, 1L) != 0) + ak;
    } else {
      ao = (fn2(original_data_type, 1L) != 0) + ak;
    }
  }
  printf("checksum = %X\n", q);
  return 0;
}