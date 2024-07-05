#include <stdio.h>

typedef short a;
typedef int b;
typedef long c;
typedef char d;
typedef short e;
typedef unsigned f;
typedef unsigned g;



d fn4(d p1, d p2) { return p1; }

f fn5(f p1, f p2) { return p2; }

f p;
b t;
f u;
c v;
a w;
f ab;
a ac = 1L;

d fn10(g, e);
b fn13() {
  e ae = 1UL;
  fn10(u, t);
  return ae;
}

d fn10(g p1, e p2) {
  b al = 3L;
  c am = 1L;
  b an;
  
  // Unrolled loop iteration 1 (w = 3)
  if ((an = 250UL) == 250UL) {
    p2 = fn5(ab, ac) || (an = 3) == 0x294A85636008822DLL;
    a ao = 0xBCD1L;
    if ((ao - fn4(am - an, 0xECL)) - p2 & 1UL) {
      v = 1UL;
    }
  }
  
  // Unrolled loop iteration 2 (w = 2)
  if ((an = 250UL) == 250UL) {
    p2 = fn5(ab, ac) || (an = 2) == 0x294A85636008822DLL;
    a ao = 0xBCD1L;
    if ((ao - fn4(am - an, 0xECL)) - p2 & 1UL) {
      v = 1UL;
    }
  }
  
  // Unrolled loop iteration 3 (w = 1)
  if ((an = 250UL) == 250UL) {
    p2 = fn5(ab, ac) || (an = 1) == 0x294A85636008822DLL;
    a ao = 0xBCD1L;
    if ((ao - fn4(am - an, 0xECL)) - p2 & 1UL) {
      v = 1UL;
    }
  }
  
  return al;
}

int main() {
  fn13();
  p = v;
  printf("checksum = %X\n", p);
  return 0;
}