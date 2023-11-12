#include <stdio.h>

typedef unsigned d;

long fn1(long p1, long p2) {
  return p1 - p2;
}

d fn2(d p1, d p2) {
  return p1;
}

long k;
long l;
short m;
short ac = 1L;

int main() {
  short i;
  long am = 1L;
  int an;

  for (m = 3; m; m -= 1) {
    if (an == 250L) {
      i = ac || (an == m) == 0x294A85636008822DLL;
      short ao = 0xBCD1;
      if (fn1(ao, fn2(am - an, 0xEC)) - i & 1L) {
        l = 1L;
      }
    }
  }

  k = l;
  printf("checksum = %X\n", k);

  return 0;
}
