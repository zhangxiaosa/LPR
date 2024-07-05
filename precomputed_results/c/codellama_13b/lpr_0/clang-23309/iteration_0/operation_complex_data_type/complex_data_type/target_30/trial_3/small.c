
#include <stdio.h>

// Decomposing variables with complex data types
typedef short a;                         // a is a short
typedef int b;                           // b is an int
typedef long c;                          // c is a long
typedef unsigned char d;                 // d is an unsigned char
typedef short e;                         // e is a short
typedef unsigned g;                      // g is an unsigned

// Decomposing function parameters with complex data types
int fn2(int p1, short p2) { return p1 - p2; }  // p2 is a short
c fn3(c p1, c p2) { return p1 - p2; }           // p2 is a long
d fn4(d p1, d p2) { return p1; }                // p2 is an unsigned char
e fn5(e p1, e p2) { return p2; }                // p2 is a short
e fn6(d p1, e p2) { return p1 - p2; }           // p2 is a short

// Decomposing global variables with complex data types
e p;                                      // p is a short
void fn9(unsigned long p1, char *p2, int p3) { p = p1; }  // p1 is an unsigned long
int t;                                      // t is an int
e u;                                        // u is a short
c v;                                        // v is a long
a w;                                        // w is a short
e ab;                                       // ab is a short
a ac = 1L;                                  // ac is a long
d fn10(int, short);                         // fn10 is a function with int and short as parameters
d fn11(d, e, b, short);                     // fn11 is a function with d, e, b, and short as parameters
a fn12(b, b, unsigned char, a, g);          // fn12 is a function with b, b, unsigned char, a, and g as parameters

// Decomposing local variables with complex data types
int fn13() {
  short ae = 1UL;                           // ae is a short
  fn10(u, t);                              // u and t are decomposed into int and short
  return ae;
}
d fn10(int p1, short p2) {
  int af = 0x2F2F6D26L;                    // af is an int
  d ag = 248UL;                             // ag is an unsigned char
  fn11(2L, ag, p2, 1);                      // 2L and ag are decomposed into long and unsigned char
  return af;
}
d fn11(d p1, e p2, b p3, short p4) {
  c ai = 7L;                               // ai is a long
  short aj = 1UL;                          // aj is a short
  fn12(ai, ai, p1, 0, p1);                 // ai and p1 are decomposed into long and unsigned char
  return aj;
}
a fn12(b p1, b p2, unsigned char p3, a p4, g p5) {
  int al = 3L;                             // al is an int
  c am = 1L;                               // am is a long
  int an;                                  // an is an int
  for (w = 3; w; w -= 1) {
    an = 250UL;                            // an is an unsigned long
    p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;    // ab and ac are decomposed into short and long
    a ao = 0xBCD1L;                        // ao is a long
    if (fn2(fn3(ao, fn4(fn6(am, an), 0xECL)), p2) & 1UL)
      v = 1UL;                             // am and an are decomposed into long and unsigned char
  }
  return al;
}
int main() {
  int ap = 0;
  fn13();
  fn9(v, "g_170", ap);
  printf("checksum = %X\n", p);
  return 0;
}
