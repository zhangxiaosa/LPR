#include <stdio.h>

typedef int c;
typedef unsigned d;
typedef short e;
typedef unsigned f;

int fn1(int p1, int p2) {
  return p2 == 0 ? p1 : p1 % p2;
}

int fn3(int p1, int p2) {
  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1 : p1 + p2;
}

f m;
d n;
signed o;

short fn6() {
  for (; n < 12; n = fn3(n, 3)) {
    int ab;
    if (0x4F92L < (ab = fn1(o, o), 6)) {
      // Do something
    } else {
      signed ac = 0xE3L;
      if (o <= ac) {
        // Do something
      } else if (ab) {
        break;
      }
    }
  }
  return m;
}

int main(void) {
  fn6();
}
