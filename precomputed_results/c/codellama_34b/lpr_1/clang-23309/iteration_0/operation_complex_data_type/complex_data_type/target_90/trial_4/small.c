
short t;
unsigned char u_char;
short v;
unsigned char w;
short ab;
unsigned char ac = 1;
unsigned char fn10(short, short);
unsigned char fn11(unsigned char, short, short, short);

short fn13() {
  short ae = 1;
  fn10(u_char, t);
  return ae;
}

unsigned char fn10(short p1, short p2) {
  short af = 0x2F2F6D26;
  unsigned char ag = 248;
  short an = 250;
  unsigned char ao = 0xBCD1;
  short am = 1;
  short al = 3;
  short an = p2;

  // Unroll the loop 4 times
  for (w = 3; w; w--) {
    an = 250;
    p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822D;
    short ao = 0xBCD1;
    if (fn2(fn3(ao, fn6(am, an)), p2) & 1)
      v = 1;
  }
  for (w = 3; w; w--) {
    an = 250;
    p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822D;
    short ao = 0xBCD1;
    if (fn2(fn3(ao, fn6(am, an)), p2) & 1)
      v = 1;
  }
  for (w = 3; w; w--) {
    an = 250;
    p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822D;
    short ao = 0xBCD1;
    if (fn2(fn3(ao, fn6(am, an)), p2) & 1)
      v = 1;
  }
  for (w = 3; w; w--) {
    an = 250;
    p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822D;
    short ao = 0xBCD1;
    if (fn2(fn3(ao, fn6(am, an)), p2) & 1)
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
