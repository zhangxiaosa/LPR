c
// Decomposed version of the program with primary data types

// typedefs
typedef int b;
typedef unsigned char d;
typedef short f;
typedef unsigned g;

// functions
void fn1(int p1, int p2) { printf("checksum = %X\n", p1); }

int fn2(int p1, int p2) { return p1 - p2; }

long fn3(long p1, long p2) { return p1 - p2; }

d fn4(d p1, d p2) { return p1; }

f fn5(f p1, f p2) { return p2; }

f fn6(f p1, f p2) { return p1 - p2; }

// variables
int p;

void fn9(int p1, char *p2, int p3) { p = p1; }

int t;
int u;
unsigned v;
short w;
int ab;
unsigned long ac = 1L;

long fn10(int p1, int p2) {
  long af = 0x2F2F6D26L;
  int ag = 248UL;
  fn11(2L, ag, p2, 1);
  return af;
}

long fn11(long p1, int p2, int p3, int p4) {
  unsigned ai = 7L;
  int aj = 1UL;
  fn12(ai, ai, p1, 0, p1);
  return aj;
}

short fn12(int p1, int p2, long p3, short p4, int p5) {
  int al = 3L;
  unsigned an;
  for (w = 3; w; w -= 1)
    if (an = 250UL) {
      p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
      int ao = 0xBCD1L;
      if (fn2(fn3(ao, fn4(fn6(1UL, an), 0xECL)), p2) & 1UL)
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
