
void fn1(short p1, int p2) { printf("checksum = %X\n", p1); }
short fn2(short p1, short p2) { return p1 - p2; }
short fn3(short p1, short p2) { return p1 - p2; }
short fn5(short p1, short p2) { return p2; }
short fn6(short p1, short p2) { return p1 - p2; }
short p;
void fn9(short p1, char *p2) { p = p1; }
short t;
unsigned u;
short v;
unsigned char w;
short ab;
unsigned ac = 1;
unsigned char fn10(short, short);
unsigned char fn11(unsigned char, short, short, short);
short fn13() {
  fn10(u, t);
  return 1;
}
unsigned char fn10(short p1, short p2) {
  unsigned char af = 0x2F2F6D26;
  unsigned ag = 248;
  fn11(2, ag, p2, 1);
  return af;
}
unsigned char fn11(unsigned char p1, short p2, short p3, short p4) {
  short ao = 0xBCD1;
  if (fn2(fn3(ao, fn6(1, 1)), p2) & 1) {
    v = 1;
  }
  return 0;
}
int main() {
  fn13();
  fn9(v, "g_170");
  fn1(p, 0);
  return 0;
}
