#include <stdbool.h>

int fn2(int p1, int p2) { return p1; }

int fn3(int p1, int p2) {
  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1
                                                                    : p1 + p2;
}

unsigned m;
unsigned n;
int o;

static int p = 291394359;

short fn6() {
  for (; n < (unsigned)12; n = (unsigned)fn3(n, 3)) {
    int ab;
    if (0x4F92L < (int)(p | (ab = o == 0 ? o : o % o), 6))
      ;
    else {
      int ac = 0xE3L;
      if (o <= ac)
        ;
      else if (ab)
        break;
    }
  }
  return (short)m;
}

int main() { fn6(); }
