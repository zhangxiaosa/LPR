
#include <stdio.h>

void fn1(short t) { printf("checksum = %X\n", t); }

short fn2(short t) { return t; }

short fn3(short t) { return t; }

short fn5(short t) { return t; }

short fn6(short t) { return t; }

short p;

void fn9(short t, char *p2, int p3) { p = t; }

u_char u;
u_char w;
u_char fn10(short t, short t2);
u_char fn11(u_char t, short t2, short t3, short t4);
u_char fn12_inlined(short t, short t2, u_char t3, short t4);

short fn13() {
  short t = 1UL;
  fn10(u, t);
  return t;
}

u_char fn10(short t, short t2) {
  short t3 = 248UL;
  fn11(2L, t3, t2, 1);
  return t;
}

u_char fn11(u_char t, short t2, short t3, short t4) {
  short t5 = 7L;
  short t6 = 1UL;
  fn12_inlined(t5, t5, t, 0);
  return t6;
}

u_char fn12_inlined(short t, short t2, u_char t3, short t4) {
  short t7 = 3L;
  short t8 = 1L;
  short t9;
  for (w = 3; w; w--) {
    t9 = 250UL;
    t2 = fn5(ab, ac) || (t9 = w) == 0x294A85636008822DLL;
    short t10 = 0xBCD1L;
    if (fn2(fn3(t10, fn6(t8, t9)), t2) & 1)
      v = 1UL;
  }
  return t7;
}

int main() {
  int ap = 0;
  fn13();
  fn9(v, "g_170", ap);
  fn1(p, ap);
  return 0;
}
