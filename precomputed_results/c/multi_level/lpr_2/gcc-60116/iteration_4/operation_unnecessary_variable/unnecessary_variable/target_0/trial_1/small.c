#include <stdio.h>

int fn2(int p1, int p2) {
  return p1 && p2 ? p1 : p1 % p2;
}

unsigned w = 0xDC6F3D13L;
long long ag3;
short ah;
long long ak;
unsigned ao;
unsigned original_data_type;

int main() {
  ak = 0;
  unsigned fn2_result = fn2(original_data_type, 1L);

  for (ah = 0; ah <= 3; ah += 1) {
    if (w) {
      ag3 = ~((fn2_result != 0) + ak) && 0x57L;
    } else {
      ao = ~((fn2_result != 0) + ak) && 0x57L;
    }
  }

  printf("checksum = %X\n", ag3);
  return 0;
}
