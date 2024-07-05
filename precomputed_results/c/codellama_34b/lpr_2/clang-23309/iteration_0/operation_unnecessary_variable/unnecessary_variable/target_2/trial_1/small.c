
void fn1(p1) { printf("checksum = %X\n", p1); }

int fn2(int p1, int p2) { return p1 - p2; }

unsigned char fn4(unsigned p1, unsigned p2) { return p1; }

int fn5(int p1, int p2) { return p2; }

int fn6(int p1, int p2) { return p1 - p2; }

int p;
int t;
long v;
short w;
int ab;
short ac = 1L;

int fn13() {
  int al = 3L;
  long am = 1L;
  short ao = 0xBCD1L;
  for (w = 3; w; w -= 1) {
    t = fn5(ab, ac) || (w = 250UL) == 0x294A85636008822DLL;
    if (fn2(ao - fn4(fn6(1L, w), 0xECL), t) & 1UL)
      v = 1;
  }
  return al;
}

int main() {
  fn13();
  p = v;
  fn1(p);
  return 0;
}
