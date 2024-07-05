void fn1(unsigned p1, int p2) { printf("checksum = %X\n", p1); }

char fn4(char p1, char p2) { return p1; }

unsigned fn5(unsigned p1, unsigned p2) { return p2; }

unsigned p;
int t;
unsigned u;
long v;
short w;
unsigned ab;
short ac = 1L;
char fn10(unsigned, short);
char fn11(char, unsigned, int);
short fn12(int, int, char, unsigned);
int fn13() {
  fn10(u, t);
  return 1UL;
}
char fn10(unsigned p1, short p2) {
  int af = 0x2F2F6D26L;
  int an;
  for (w = 3; w; w -= 1)
    if (an = 250UL) {
      p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
      short ao = 0xBCD1L;
      if (ao - fn4(1L - an, 0xECL) - p2 & 1UL)
        v = 1UL;
    }
}
char fn11(char p1, unsigned p2, int p3) {
  fn12(7L, 7L, p1, 0);
}
short fn12(int p1, int p2, char p3, unsigned p5) {
  long am = 1L;
  int an;
  for (w = 3; w; w -= 1)
    if (an = 250UL) {
      p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
      short ao = 0xBCD1L;
      if (ao - fn4(am - an, 0xECL) - p2 & 1UL)
        v = 1UL;
    }
}

int main() {
  fn13();
  fn1(p, 0);
  return 0;
}