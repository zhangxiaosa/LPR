c
typedef short a;
typedef int b;
typedef long c;
typedef unsigned char d;
typedef short e;
typedef unsigned f;
typedef unsigned g;

int fn2(int p1, int p2) { return p1 - p2; }
c fn3(c p1, c p2) { return p1 - p2; }
unsigned char fn4(unsigned char p1, unsigned char p2) { return p1; }
f fn5(f p1, f p2) { return p2; }
f fn6(f p1, f p2) { return p1 - p2; }
f p;
void fn9(g p1, char *p2, int p3) { p = p1; }
int t;
f u;
c v;
a w;
f ab;
a ac = 1L;
unsigned char fn10(g, e);
unsigned char fn11(unsigned char, f, b, e);
a fn12(b, b, unsigned char, a, g);

int fn13() {
  e ae = 1UL;
  fn10(u, t);
  return ae;
}

unsigned char fn10(g p1, e p2) {
  int af = 0x2F2F6D26L;
  unsigned char ag = 248UL;
  fn11(2L, ag, p2, 1);
  return af;
}

unsigned char fn11(unsigned char p1, f p2, b p3, e p4) {
  c ai = 7L;
  e aj = 1UL;
  fn12(ai, ai, p1, 0, p1);
  return aj;
}

a fn12(b p1, b p2, unsigned char p3, a p4, g p5) {
  int al = 3L;
  c am = 1L;
  int an;
  for (w = 3; w; w -= 1) {
    an = 250UL;
    p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
    unsigned char ao = 0xBCD1L;
    if (fn2(fn3(ao, fn4(fn6(am, an), 0xECL)), p2) & 1UL)
      v = 1UL;
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
