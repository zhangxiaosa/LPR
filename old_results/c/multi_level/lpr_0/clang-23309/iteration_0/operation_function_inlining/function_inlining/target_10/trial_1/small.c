#include <stdio.h>

typedef short a;
typedef int b;
typedef long c;
typedef unsigned char d;
typedef short e;
typedef unsigned f;
typedef unsigned g;

b fn2(b p1, b p2) { return p1 - p2; }
c fn3(c p1, c p2) { return p1 - p2; }
f fn6(f p1, f p2) { return p1 - p2; }

f p;

void fn7(p1) { p = p1; }

c fn13() {
  {
    b af = 0x2F2F6D26L;
    {
      c ai = 7L;
      e aj = 1UL;
      {
        b al = 3L;
        c am = 1L;
        b an;
        for (w = 3; w; w -= 1)
          if (an = 250UL) {
            f p2 = ac || (an = w) == 0x294A85636008822DLL;
            a ao = 0xBCD1L;
            if (((ao - (fn6(am, an) - 0xECL)) - p2) & 1UL)
              v = 1UL;
          }
      }
    }
    return af;
  }
}

int main() {
  int ap = 0;
  c ai = 7L;
  e aj = 1UL;
  {
    b al = 3L;
    c am = 1L;
    b an;
    for (w = 3; w; w -= 1)
      if (an = 250UL) {
        f p2 = ac || (an = w) == 0x294A85636008822DLL;
        a ao = 0xBCD1L;
        if (((ao - (fn6(am, an) - 0xECL)) - p2) & 1UL)
          v = 1UL;
      }
  }

  p = v;
  printf("checksum = %X\n", p);
  return 0;
}