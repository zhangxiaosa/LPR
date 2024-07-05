void fn1(unsigned p1, int p2) { printf("checksum = %X\n", p1); }

int fn2(int p1, int p2) { return p1 - p2; }

long fn3(long p1, long p2) { return p1 - p2; }

unsigned char fn4(unsigned p1, unsigned p2) { return p1; }

unsigned fn6(unsigned p1, unsigned p2) { return p1 - p2; }

unsigned p;

void fn7(p1) { p = p1; }

void fn8(p1) { fn7(p1); }

void fn9(unsigned p1, char *p2, int p3) { fn7(p1); }

int t;

unsigned u;

long v;

short w;

unsigned char fn10(unsigned p1, short p2);

unsigned char fn11(unsigned char p1, unsigned p2, int p3, short p4);

short fn12(int p1, int p2, unsigned char p3, short p4, unsigned p5);

int fn13() {
  unsigned ae = 1UL;
  int ap = 0;
  unsigned char result_fn10 = fn10(u, t);
  unsigned p1 = v;
  char *p2 = "g_170";
  fn7(p1);
  printf("checksum = %X\n", p1);

  return ae;
}

unsigned char fn10(unsigned p1, short p2) {
  int af = 0x2F2F6D26L;
  unsigned ag = 248UL;
  long ai = 7L;
  short aj = 1UL;
  int al = 3L;
  long am = 1L;
  int an = 250UL;

  short ao = 0xBCD1L;

  if (fn2(fn3(ao, fn4(fn6(am, an), 0xECL)), p1 || (an = w) == 0x294A85636008822DLL) & 1UL)
    v = 1UL;

  return af;
}

unsigned char fn11(unsigned char p1, unsigned p2, int p3, short p4) {
  long ai = 7L;
  short aj = 1UL;
  int al = 3L;
  long am = 1L;
  int an = 250UL;

  short ao = 0xBCD1L;

  if (fn2(fn3(ao, fn4(fn6(am, an), 0xECL)), p1 || (an = w) == 0x294A85636008822DLL) & 1UL)
    v = 1UL;

  return aj;
}

short fn12(int p1, int p2, unsigned char p3, short p4, unsigned p5) {
  int al = 3L;
  long am = 1L;
  int an = 250UL;

  short ao = 0xBCD1L;

  if (fn2(fn3(ao, fn4(fn6(am, an), 0xECL)), p1 || (an = w) == 0x294A85636008822DLL) & 1UL)
    v = 1UL;

  return al;
}

int main() {
  int ap = 0;
  unsigned ae = 1UL;
  int result_fn13 = ae;
  unsigned char result_fn10 = fn10(u, t);

  unsigned p1 = v;
  char *p2 = "g_170";
  fn7(p1);
  printf("checksum = %X\n", p1);

  return 0;
}