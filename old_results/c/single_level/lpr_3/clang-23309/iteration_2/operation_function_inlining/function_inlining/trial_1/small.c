void fn1(unsigned p1, int p2) { printf("checksum = %X\n", p1); }
int fn2(int p1, int p2) { return p1 - p2; }
long fn3(long p1, long p2) { return p1 - p2; }
unsigned char fn4(unsigned p1, unsigned p2) { return p1; }
unsigned fn5(unsigned p1, unsigned p2) { return p2; }
unsigned fn6(unsigned p1, unsigned p2) { return p1 - p2; }
unsigned p;
void fn9(unsigned p1, char *p2, int p3) { p = p1; }
int t;
unsigned u;
long v;
short w;
unsigned ab;
short ac = 1L;
unsigned char fn10(unsigned, short);
unsigned char fn11(unsigned char, unsigned, int, short);
short fn12(int, int, unsigned char, short, unsigned);

int main() {
  int ap = 0;

  // Inlined fn13()
  fn10(u, t);

  fn9(v, "g_170", ap);
  fn1(p, ap);

  return 0;
}