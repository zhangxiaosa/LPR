#include <stdio.h>

int fn2(int p1, int p2) {
  return p1 && p2 ? p1 : p1 % p2;
}

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
    if (original_data_type == 0) {
      unsigned assigned_value = ak && 0x57L;
      if (w) {
        q = 0x41AEA787L;
        ag3 = assigned_value;
      } else {
        ao = assigned_value;
      }
    } else {
      unsigned assigned_value = 0x57L;
      if (w) {
        q = 0x41AEA787L;
        ag3 = assigned_value;
      } else {
        ao = assigned_value;
      }
    }
  }

  printf("checksum = %X\n", q);
  return 0;
}