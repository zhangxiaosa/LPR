#include <stdbool.h>

signed int fn2(short p1, signed int p2) {
  return p1;
}

signed int fn3(signed int p1, signed int p2) {
  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 ? p1
                                                                    : p1 + p2;
}

unsigned int n;
signed int o;
static unsigned int p = 0x01B28DB7L;

signed int main(void) {
  for (; n < 12u; n = fn3(n, 3)) {
    signed int ab;
    if (0x4F92L < fn2(p | (ab = o == 0 ? o : o % o), 6))
      ;
    else if (o <= 0xE3L)
      ;
    else if (ab)
      break;
  }
  return 0;
}