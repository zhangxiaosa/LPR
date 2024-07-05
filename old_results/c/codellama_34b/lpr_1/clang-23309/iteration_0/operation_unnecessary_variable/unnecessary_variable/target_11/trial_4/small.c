
void fn1(short p1, int p2) { printf("checksum = %X\n", p1); }
short fn2(short p1, short p2) { return p1 - p2; }
short fn3(short p1, short p2) { return p1 - p2; }
short fn5(short p1, short p2) { return p2; }
short fn6(short p1, short p2) { return p1 - p2; }
void fn10(short, short);
unsigned char fn10(short p1, short p2) {
  short al = 3;
  short an;
  for (an = 250; an; an--) {
    if (fn2(fn3(0xBCD1, fn6(1, an)), p2) & 1)
      v = 1;
  }
  return al;
}
int main() {
  fn1(p, 0);
  return 0;
}
