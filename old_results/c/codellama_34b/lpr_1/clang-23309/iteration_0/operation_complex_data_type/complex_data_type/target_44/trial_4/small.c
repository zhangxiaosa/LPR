
#include <stdio.h>

typedef unsigned char u_char;
typedef short s_short;

void fn1(short checksum, int data) { printf("checksum = %X\n", checksum); }

short fn2(short sum, short data) { return sum - data; }

short fn3(short sum, short data) { return sum - data; }

short fn5(short sum, short data) { return data; }

short fn6(short sum, short data) { return sum - data; }

short t;
u_char u;
short v;
u_char w;
short ab;
u_char ac = 1L;
u_char fn10(short, short);
u_char fn11(u_char, short, short, short);
u_char fn12(short, short, u_char, short);

short fn13() {
  short ae = 1UL;
  fn10(u, t);
  return ae;
}

u_char fn10(short sum, short data) {
  short af = 0x2F2F6D26L;
  u_char ag = 248UL;
  fn11(2L, ag, data, 1);
  return af;
}

u_char fn11(u_char sum, short data, short data2, short data3) {
  short ai = 7L;
  short aj = 1UL;
  fn12(ai, ai, sum, 0);
  return aj;
}

u_char fn12(short sum, short data, u_char sum2, short data2) {
  short al = 3L;
  short am = 1L;
  short an;
  for (w = 3; w; w -= 1) {
    an = 250UL;
    data2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
    short ao = 0xBCD1L;
    if (fn2(fn3(ao, fn6(am, an)), data2) & 1UL)
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
