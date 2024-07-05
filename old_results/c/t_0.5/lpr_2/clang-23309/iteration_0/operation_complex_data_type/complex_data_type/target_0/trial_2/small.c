short fn2(short p1, short p2) { return p1 - p2; }
unsigned char fn4(unsigned p1, unsigned p2) { return p1; }
unsigned fn5(unsigned p1, unsigned p2) { return p2; }
unsigned fn6(unsigned p1, unsigned p2) { return p1 - p2; }
unsigned p;
long v;
short w;
unsigned ab_temp;
short ac = 1L;

short fn13() {
  short al = 3L;
  long am = 1L;
  short an;
  for (w = 3; w; w -= 1)
    if (an = 250UL) {
      unsigned ab_temp2 = fn5(ab_temp, ac) || (an = w) == 0x294A85636008822DLL;
      ab_temp = ab_temp2;
      short ao = 0xBCD1L;
      if (fn2(ao - fn4(fn6(am, an), 0xECL), ab_temp) & 1UL)
        v = 1UL;
    }
  return al;
}

int main() {
  fn13();
  p = v;
  printf("checksum = %X\n", p);
  return 0;
}