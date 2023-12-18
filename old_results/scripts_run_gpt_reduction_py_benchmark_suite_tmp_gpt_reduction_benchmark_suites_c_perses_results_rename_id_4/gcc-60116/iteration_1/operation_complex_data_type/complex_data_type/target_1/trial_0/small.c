#include <stdio.h>

unsigned w = 0xDC6F3D13L;

long long ag[4];

int v;
int q;

long long calculateAu_0(int aj, int am, long ak, int ap, int aq, long p1, long long p2) {
  int result = 0;
  if ((((~(fn3(aj, p1 % (p2 != 0 ? p2 : 1))) != 0 ? (p1 % (p2 != 0 ? p2 : 1)) : 0)) && 0x57) > 2) {
    v = am;
    ag[3] = p1 + p2;
  }
  else {
    result = p1 + p2;
  }
  return result;
}

void fn12() {
  long ak = 0;
  int au_0 = 0;
  for (ak = 0;;) {
    for (int ah = 0; ah <= 3; ah += 1) {
      if (w >= calculateAu_0(aj, am, ak, ap, aq, 4, fn8(ah, ak)) > 2) {
        v = am;
        ag[3] = calculateAu_0(aj, am, ak, ap, aq, 4, fn8(ah, ak));
      }
      else {
        au_0 = calculateAu_0(aj, am, ak, ap, aq, 4, fn8(ah, ak));
      }
    }
    return;
  }
}

int main() {
  fn12();
  q = v;
  printf("checksum = %d\n", q);
  return 0;
}