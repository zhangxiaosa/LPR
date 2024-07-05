
typedef int b;
typedef long c;
typedef unsigned char char;
typedef short e;
typedef unsigned f;
typedef unsigned g;
b fn2(b p1, b p2) { return p1 - p2; }
c fn3(c p1, c p2) { return p1 - p2; }
char fn4(char p1, char p2) { return p1; }
f fn5(f p1, f p2) { return p2; }
f fn6(f p1, f p2) { return p2 - p1; }
f p;
void fn9(g p1, char *p2, int p3) { p = p1; }
b t;
f u;
c v;
short w;
f ab;
short ac = 1L;
char fn10(g, e);
char fn11(char, f, b, e);
short fn12(b, b, char, short, g);
b fn13() {
  e ae = 1UL;
  fn10(u, t);
  return ae;
}
char fn10(g p1, e p2) {
  b af = 0x2F2F6D26L;
  char ag = 248UL;
  fn11(2L, ag, p2, 1);
  return af;
}
char fn11(char p1, f p2, b p3, e p4) {
  c ai = 7L;
  e aj = 1UL;
  fn12(ai, ai, p1, 0, p1);
  return aj;
}
short fn12(b p1, b p2, char p3, short p4, g p5) {
  b al = 3L;
  c am = 1L;
  b an;
  for (w = 3; w; w -= 1)
    if (an = 250UL) {
      p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
      short ao = 0xBCD1L;
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
