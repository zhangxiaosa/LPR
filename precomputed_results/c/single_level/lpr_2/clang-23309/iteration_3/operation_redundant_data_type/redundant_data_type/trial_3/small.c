void fn1(unsigned int p1, int p2) { printf("checksum = %X\n", p1); }
int fn2(int p1, int p2) { return p1 - p2; }
long int fn3(long int p1, long int p2) { return p1 - p2; }
char fn4(unsigned int p1, unsigned int p2) { return p1; }
unsigned int fn6(unsigned int p1, unsigned int p2) { return p1 - p2; }
unsigned int p;
void fn7(p1) { p = p1; }
void fn8(p1) { fn7(p1); }
void fn9(unsigned int p1, char *p2) { fn8(p1); }
int t;
unsigned int u;
long int v;
short int w;
char fn11(char, unsigned int, int, short int);
short int fn12(int, int, char, short int, unsigned int);
unsigned int fn10(unsigned int p1, short int p2) {
  int af = 0x2F2F6D26L;
  unsigned int ag = 248UL;
  fn11(2L, ag, p2, 1);
  return af;
}
char fn11(char p1, unsigned int p2, int p3, short int p4) {
  long int ai = 7L;
  short int aj = 1UL;
  fn12(ai, ai, p1, 0, p1);
  return aj;
}
short int fn12(int p1, int p2, char p3, short int p4, unsigned int p5) {
  int al = 3L;
  long int am = 1L;
  int an;
  for (w = 3; w; w -= 1)
    if (an = 250UL) {
      p2 = p1 || (an = w) == 0x294A85636008822DLL;
      short int ao = 0xBCD1L;
      if (fn2(fn3(ao, fn4(fn6(am, an), 0xECL)), p2) & 1UL)
        v = 1UL;
    }
  return al;
}
int main() {
  int ap = 0;
  fn10(u, t);
  fn9(v, "g_170");
  fn1(p, ap);
  return 0;
}