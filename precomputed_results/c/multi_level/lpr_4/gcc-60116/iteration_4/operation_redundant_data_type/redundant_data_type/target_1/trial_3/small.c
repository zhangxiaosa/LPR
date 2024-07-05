#include <stdio.h>

int fn2(int p1, long p2) {
  return p1 && p2 ? p1 : p1 % p2;
}

long long fn8(long p1, long long p2) {
  return p1 + p2;
}

int v;
int w = -598310077;
long long ag[4];
int ah;
long ak;
int al;
int ao;
int ap;

int fn12() {
  long au_0;
  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1) {
      au_0 = fn8(~(fn2(ap, 1) != 0), ak) && 0x57;
      if (w) {
        v = 1117156287;
        ag[3] = au_0;
      } else {
        ao = au_0;
      }
    }
    return al;
  }
}

int main() {
  fn12();
  printf("checksum = %d\n", v);
  return 0;
}