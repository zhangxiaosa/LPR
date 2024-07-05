
#include <stdio.h>

typedef unsigned char u_char;
typedef short s_short;

void fn1(short, int);
short fn2(short, short);
short fn3(short, short);
short fn5(short, short);
short fn6(short, short);
short p;

void fn9(short, char*, int);
short t;
char u;
short v;
char w;
short ab;
char ac = 1;
char fn10(char, char);
char fn11(char, short, short, short);
char fn12(short, short, char, short, short);

short fn13() {
  short ae = 1;
  fn10(u, t);
  return ae;
}

char fn10(char p1, char p2) {
  short af = 0x2F2F6D26;
  char ag = 248;
  fn11(2, ag, p2, 1);
  return af;
}

char fn11(char p1, short p2, short p3, short p4) {
  short ai = 7;
  short aj = 1;
  fn12(ai, ai, p1, 0, p1);
  return aj;
}

char fn12(short p1, short p2, char p3, short p4, short p5) {
  short al = 3;
  short am = 1;
  short an;
  for (w = 3; w; w -= 1) {
    an = 250;
    p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822D;
    short ao = 0xBCD1;
    if (fn2(fn3(ao, fn6(am, an)), p2) & 1)
      v = 1;
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
