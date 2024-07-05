#include <stdio.h>

int fn2(int p1, int p2) { return p1 && p2 ? p1 : p1 % p2; }
int fn5(int p1, int p2) { return 1110486715; }
long long fn8(long p1, long long p2) { return p1 + p2; }

unsigned f = 0;
int ah;
int ak;
int am = 0x41AEA787L;

int main() {
  int au_4_1_5;
  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1) {
      if (0xDC6F3D13L >= (0xDC6F3D13L > 2)) {
        f = am;
        au_4_1_5 = 1110486715;
      }
    }
    break; // Exiting the infinite loop in fn12
  }

  printf("checksum = %X\n", f);
  return 0;
}