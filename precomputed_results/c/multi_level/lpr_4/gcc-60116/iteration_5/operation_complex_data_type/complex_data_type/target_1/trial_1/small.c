#include <stdio.h>

int fn2(int p1, int p2) { return p1 && p2 ? p1 : p1 % p2; }

long long fn8(int p1, long long p2) { return p1 + p2; }

int v;
int w = 0xDC6F3D13L;
long long ag0, ag1, ag2, ag3;
int ah;
int ak;
int ap;

int fn12() {
  int au_0;
  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1) {
      int fn2_result = fn2(ap, 1) != 0;
      int fn2_negation = ~(fn2_result);
      int fn8_arg = fn2_negation;
      int fn8_result = fn8(fn8_arg, ak);
      int au_0 = fn8_result && 0x57;

      if (w) {
        v = 0x41AEA787L;
        ag3 = au_0;
      } else {
        ag3 = au_0;
      }
    }
    return 0;
  }
}

int main() {
  fn12();
  printf("checksum = %d\n", v);
  return 0;
}