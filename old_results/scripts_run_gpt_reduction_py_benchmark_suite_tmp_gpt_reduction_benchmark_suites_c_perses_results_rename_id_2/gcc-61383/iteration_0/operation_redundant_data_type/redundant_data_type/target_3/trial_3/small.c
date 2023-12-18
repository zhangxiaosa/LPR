#include <stdio.h>

typedef int original_c;
typedef unsigned original_d;
typedef short original_e;
typedef unsigned original_f;

int fn2(int p1, int p2) { return p1; }

original_c fn3(original_c p1, original_c p2) {
  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1
                                                                    : p1 + p2;
}

original_f m;
original_d n;
int o;

static original_f p = 0x01B28DB7L;

original_e fn6() {
  for (; n < 12; n = fn3(n, 3)) {
    int ab;
    if (0x4F92L < fn2(p | (ab = o == 0 ? o : o % o), 6))
      ;
    else {
      int ac = 0xE3L;
      if (o <= ac)
        ;
      else if (ab)
        break;
    }
  }
  return m;
}

void main() { fn6(); }
