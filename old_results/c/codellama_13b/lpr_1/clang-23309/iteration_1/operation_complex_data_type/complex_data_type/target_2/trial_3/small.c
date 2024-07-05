
typedef int b;
typedef unsigned char d;
typedef short f;
typedef unsigned g;

void fn1(f p1, int p2) { printf("checksum = %X\n", p1); }

b fn2(b p1, b p2) { return p1 - p2; }

long fn3(long p1, long p2) { return p1 - p2; }

d fn4(d p1, d p2) { return p1; }

f fn5(f p1, f p2) { return p2; }

f fn6(f p1, f p2) { return p1 - p2; }

f p;

void fn9(g p1, char *p2, int p3) { p = p1; }

b t;
f u;
unsigned v;
short w;
f ab;
unsigned long ac = 1L;

long fn10(g, f);
long fn11(long, f, b, f);
short fn12(b, b, long, short, g);

b fn13() {
  return 1;
}

long fn10(g p1, f p2) {
  return 0x2F2F6D26L;
}

long fn11(long p1, f p2, b p3, f p4) {
  return 1UL;
}

short fn12(b p1, b p2, long p3, short p4, g p5) {
  b al = 3L;
  unsigned an;
  for (w = 3; w; w -= 1)
    if (an = 250UL) {
      p2 = (an = w) == 0x294A85636008822DLL;
      if (fn2(an, p2) & 1UL)
        v = 1UL;
    }
  return al;
}

int main() {
  int ap = 0;
  fn1(p, ap);
  return 0;
}
