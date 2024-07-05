
typedef short int a;
typedef int b;
typedef long unsigned int c;
typedef unsigned char d;
typedef short int e;
typedef unsigned int f;
typedef unsigned int g;

void fn1(unsigned int p1, int p2) { printf("checksum = %X\n", p1); }
b fn2(b p1, b p2) { return p1 - p2; }
c fn3_clone(c p1, c p2) { return p1 - p2; }
d fn4(d p1, d p2) { return p1; }
f fn5(f p1, f p2) { return p2; }
f fn6(f p1, f p2) { return p1 - p2; }
f p;
void fn9(unsigned long p1, char *p2, int p3) { p = p1; }
b t;
f u;
unsigned long v;
short int w;
f ab;
short int ac = 1UL;
d fn10(unsigned long, short int);
d fn11(d, unsigned int, short int, short int);
short int fn12(unsigned long, unsigned long, d, short int, unsigned long);

b fn13() {
  short int ae = 1UL;
  fn10(u, t);
  return ae;
}

d fn10(unsigned long p1, short int p2) {
  unsigned long af = 0x2F2F6D26L;
  d ag = 248UL;
  fn11(2L, ag, p2, 1);
  return af;
}

d fn11(d p1, unsigned int p2, short int p3, short int p4) {
  unsigned long ai = 7L;
  short int aj = 1L;
  fn12(ai, ai, p1, 0, p1);
  return aj;
}

short int fn12(unsigned long p1, unsigned long p2, d p3, short int p4, unsigned long p5) {
  unsigned long al = 3L;
  unsigned long am = 1L;
  unsigned long an;
  for (w = 3; w; w -= 1)
    if (an = 250UL) {
      p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
      short int ao = 0xBCD1L;
      if (fn2(fn3_clone(ao, fn4(fn6(am, an), 0xECL)), p2) & 1UL)
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
