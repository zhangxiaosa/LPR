char fn2(char p1, int p2) { return p1; }

short fn3(short p1, short p2) { return p2; }

int fn4(int p1, int p2) { return p1 + p2; }

unsigned p;

void fn5(p1) { p = p1; }

unsigned t;

unsigned u;

unsigned v_00;

unsigned fn8(char, int);

unsigned fn9(int, int, int, unsigned, int);

int fn10(int, unsigned, unsigned, int);

short fn11() {

  fn8(t, 0xFBL);

  return 0L;

}

unsigned fn8(char p1, int p2) {

  fn9(p2, p2, t, 18446744073709551613UL, t);

  return p1;

}

unsigned fn9(int p1, int p2, int p3, unsigned p4, int p5) {

  fn10(6, 255UL, 1, p1);

  return p2;

}

int fn10(int p1, unsigned p2, unsigned p3, int p4) {

  int d = 2L;

  for (; u < 51; ++u) {

    unsigned e0;

    unsigned e1;

    unsigned e2;

    unsigned e3;

    unsigned e4;

    unsigned e5;

    unsigned e6;

    unsigned e7;

    unsigned e8;

    unsigned e;

    int i;

    e0 = 0x9EE7F9D1C772505BLL;

    e1 = 0x9EE7F9D1C772505BLL;

    e2 = 0x9EE7F9D1C772505BLL;

    e3 = 0x9EE7F9D1C772505BLL;

    e4 = 0x9EE7F9D1C772505BLL;

    e5 = 0x9EE7F9D1C772505BLL;

    e6 = 0x9EE7F9D1C772505BLL;

    e7 = 0x9EE7F9D1C772505BLL;

    e8 = 0x9EE7F9D1C772505BLL;

    e = 0x9EE7F9D1C772505BLL;

    d = fn4(fn2(v_00 = fn3(4L, d), 3), e);

  }

  return 3;

}

int main() {

  fn11();

  fn5(v_00);

  printf("checksum = %X\n", p);

  return 0;

}