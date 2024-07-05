char fn2(char p1, int p2) { return p1; }

short fn3(short p1, short p2) { return p2; }

unsigned fn4(unsigned p1, unsigned p2) { return p1 + p2; }

unsigned p;

void fn5(p1) { p = p1; }

void fn6(p1) { fn5(p1); }

unsigned t;

unsigned u;

unsigned v_0_3;

unsigned fn8(char, int);

unsigned fn9(unsigned, unsigned, int, unsigned, int);

int fn10(int, unsigned, unsigned, int);

short fn11() {

  char a = 0xFBL;

  fn8(t, a);

  return 0;

}

unsigned fn8(char p1, int p2) {

  fn9(p2, p2, t, 18446744073709551613UL, t);

  return p1;

}

unsigned fn9(unsigned p1, unsigned p2, int p3, unsigned p4, int p5) {

  unsigned c = 255UL;

  fn10(6, c, 1, p1);

  return p2;

}

int fn10(int p1, unsigned p2, unsigned p3, int p4) {

  int d = 2L;

  for (; u < 51; u += 3) {

    unsigned e1[9], e2[9], e3[9];

    int i;

    for (i = 0; i < 9; i++)

      e1[i] = e2[i] = e3[i] = 0x9EE7F9D1C772505BLL;

    d = fn4(fn2(v_0_3 = fn3(4L, d), 3), e1[0]);

    d = fn4(fn2(v_0_3 = fn3(4L, d), 3), e2[0]);

    d = fn4(fn2(v_0_3 = fn3(4L, d), 3), e3[0]);

  }

  return 3;

}

int main() {

  fn11();

  fn6(v_0_3);

  printf("checksum = %X\n", p);

  return 0;

}