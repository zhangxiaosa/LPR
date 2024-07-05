c
#include <stdio.h>

short fn2(short p1, short p2) { return p1 - p2; }
int fn3(int p1, int p2) { return p1 - p2; }
unsigned char fn4(unsigned char p1, unsigned char p2) { return p1; }
int fn5(int p1, int p2) { return p2; }
int fn6(int p1, int p2) { return p1 - p2; }
short p;
void fn7(short p1) { p = p1; }
void fn9(short p1, char *p2, int p3) { fn7(p1); }
int t;
short u;
int v;
short w;
short ab;
short ac = 1;
short fn10(short, short);
short fn11(unsigned char, short, short, short);
short fn12(short, short, unsigned char, short, short);

short fn13() {
  short ae = 1;
  fn10(u, t);
  return ae;
}

short fn10(short p1, short p2) {
  short af = 0x2F2F6D26;
  short ag = 248;
  fn11(2, ag, p2, 1);
  return af;
}

short fn11(unsigned char p1, short p2, short p3, short p4) {
  short ai = 7;
  short aj = 1;
  fn12(ai, ai, p1, 0, p1);
  return aj;
}

short fn12(short p1, short p2, unsigned char p3, short p4, short p5) {
  short al = 3;
  short am = 1;
  short an;
  for (w = 3; w; w -= 1)
    if (an = 250) {
      p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822D;
      short ao = 0xBCD1;
      if (fn2(fn3(ao, fn4(fn6(am, an), 0xE), p2) & 1)
        v = 1;
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
