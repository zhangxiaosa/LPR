
void fn1(short p1, int p2) { printf("checksum = %X\n", p1); }
short fn2(short p1, short p2) { return p1 - p2; }
short fn3(short p1, short p2) { return p1 - p2; }
short fn5(short p1, short p2) { return p2; }
short fn6(short p1, short p2) { return p1 - p2; }
short p;
void fn9(short p1, char *p2) { p = p1; }
unsigned u; // removed
short v;
unsigned char w;
short ab;
unsigned ac = 1;
unsigned char fn10(short, short);
unsigned char fn11();
short fn13() {
  fn10(0, 0); // replaced with constant propagation
  return 1;
}
unsigned char fn10(short p1, short p2) {
  short al = 3;
  short an;
  for (w = 3; w; w--) {
    an = 250;
    p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822D;
    if (fn2(fn3(0xBCD1, fn6(1, an)), p2) & 1)
      v = 1;
  }
  return al;
}
int main() {
  fn13();
  fn9(v, "g_170");
  fn1(p, 0);
  return 0;
}
