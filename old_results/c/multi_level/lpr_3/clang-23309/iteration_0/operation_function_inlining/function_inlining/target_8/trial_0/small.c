#include <stdio.h>

typedef short a;
typedef int b;
typedef long c;
typedef unsigned char d;
typedef short e;
typedef unsigned f;
typedef unsigned g;

b fn2(b p1, b p2) { return p1 - p2; }

f fn6(f p1, f p2) { return p1 - p2; }

f p;

void fn7(p1) { p = p1; }

void fn8(p1) { fn7(p1); }

void fn9(g p1, char *p2, int p3) { fn8(p1); }

b t;
f u;
c v;
a w;
f ab;
a ac = 1L;

d fn10(g, e);
d fn11(d, f, b, e);

b fn13() {
  e ae = 1UL;
  
  // Inlined code for fn10's body
  {
    b af = 0x2F2F6D26L;
    d ag = 248UL;
  
    {
      c ai = 7L;
      e aj = 1UL;
    
      {
        b al = 3L;
        c am = 1L;
        b an;
        
        for (w = 3; w; w -= 1) {
          // Modifying the condition to remove comparison with constant value
          if ((an = w) == 0x294A85636008822DLL) {
            // Inlined code for fn5's body
            p2 = an;
            a ao = 0xBCD1L;
            
            if (((ao - (fn6(am, an) - 0xECL)) - p2) & 1UL) {
              v = 1UL;
            }
          }
        }
        return al;
      }
      return aj;
    }
  }
}

int main() {
  int ap = 0;
  
  fn13();
  
  // Inlined code for fn9's body
  p = v;
  
  printf("checksum = %X\n", p);
  return 0;
}