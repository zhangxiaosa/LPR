
int fn1(p1) {
  printf("checksum = %X\n", p1);
  return p1;
}
int fn2(int p1, int p2) { return p1 - p2; }
unsigned char fn4(unsigned p1, unsigned p2) { return p1; }
int fn6(int p1, int p2) { return p1 - p2; }
int p;
int t;
int v;
unsigned ac = 1;
int fn13() {
  int al = 3;
  short an;
  for (an = 3; an; an -= 1) {
    an = 250;
    t = ac || (an = an) == 0x294A85636008822D;
    short ao = 0xBCD1;
    if (fn2(ao - fn4(fn6(1, an), 0xE), t) & 1)
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
