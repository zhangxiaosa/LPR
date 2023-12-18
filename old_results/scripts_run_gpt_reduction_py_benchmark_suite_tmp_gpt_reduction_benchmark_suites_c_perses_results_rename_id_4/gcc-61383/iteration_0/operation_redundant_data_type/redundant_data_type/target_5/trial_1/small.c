#include <stdio.h>

unsigned fn3(unsigned p1, unsigned p2) {
  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1 : p1 + p2;
}

unsigned m;
unsigned n;
signed o;

static unsigned p = 0x01B28DB7L;

unsigned fn6() {
  for (; n < 12; n = fn3(n, 3)) {
    unsigned ab;
    if (0x4F92L < (p | (ab = o == 0 ? o : o % o), 6))
      ;
    else {
      signed ac = 0xE3L;
      if (o <= ac)
        ;
      else if (ab)
        break;
    }
  }
  return m;
}

int main() {
  fn6();
}
