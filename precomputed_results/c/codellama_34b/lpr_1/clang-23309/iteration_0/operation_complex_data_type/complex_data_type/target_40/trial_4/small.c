
#include <stdio.h>

typedef unsigned char u_char;
typedef short s_short;

void fn1(short p1, int p2) { printf("checksum = %X\n", p1); }

short fn2(short p1, short p2) { return p1 - p2; }

short fn3(short p1, short p2) { return p1 - p2; }

short fn5(short p1, short p2) { return p2; }

short fn6(short p1, short p2) { return p1 - p2; }

signed char p47; // Modified to be a signed char

void fn9(short p1, char *p2, int p3) { p = p1; }

short t;
u_char u;
short v;
u_char w;
short ab;
u_char ac = 1L;
u_char fn10(signed char, short); // Modified to take a signed char as the first argument
u_char fn11(u_char, short, short, signed char); // Modified to take a signed char as the fourth argument
u_char fn12(short, short, u_char, signed char); // Modified to take a signed char as the fourth argument

short fn13() {
  signed char ae = 1UL; // Modified to be a signed char
  fn10(u, t);
  return ae;
}

u_char fn10(signed char p1, short p2) {
  signed char af = 0x2F2F6D26L; // Modified to be a signed char
  u_char ag = 248UL;
  fn11(2L, ag, p2, 1);
  return af;
}

u_char fn11(u_char p1, short p2, short p3, signed char p4) {
  signed char ai = 7L; // Modified to be a signed char
  signed char aj = 1UL; // Modified to be a signed char
  fn12(ai, ai, p1, 0, p1);
  return aj;
}

u_char fn12(short p1, short p2, u_char p3, signed char p4, signed char p5) {
  signed char al = 3L; // Modified to be a signed char
  signed char am = 1L; // Modified to be a signed char
  signed char an;
  for (w = 3; w; w -= 1) {
    an = 250UL;
    p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
    signed char ao = 0xBCD1L; // Modified to be a signed char
    if (fn2(fn3(ao, fn6(am, an)), p2) & 1UL)
      v = 1UL;
  }
  return al;
}

int main() {
  int ap = 0;
  fn13();
  fn9(v, "g_170", ap);
  fn1(p, ap);
  return 0;
}
