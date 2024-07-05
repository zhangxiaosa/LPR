typedef int b;

typedef unsigned char d_orig;

void fn1(unsigned p1, int p2) { printf("checksum = %X\n", p1); }

b fn2(b p1, b p2) { return p1 - p2; }

long fn3(long p1, long p2) { return p1 - p2; }

d_orig fn4(d_orig p1, d_orig p2) { return p1; }

unsigned p;
b t;
unsigned u;
long v;
short w;
short ac = 1L;
d_orig fn10(unsigned, short);
b fn13() {
  fn10(u, t);
  return 1UL;
}

d_orig fn10(unsigned p1, short p2) {
  b af = 0x2F2F6D26L;
  b an;
  for (w = 3; w; w -= 1)
    if (an = 250UL) {
      p2 = ac || (an = w) == 0x294A85636008822DLL;
      short ao = 0xBCD1L;
      if (fn2(fn3(ao, fn4(af - an, 0xECL)), p2) & 1UL)
        v = 1UL;
    }
  return af;
}

int main() {
  int ap = 0;
  fn13();
  p = v;
  fn1(p, ap);
  return 0;
}