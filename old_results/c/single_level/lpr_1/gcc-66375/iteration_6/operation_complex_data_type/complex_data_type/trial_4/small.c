char fn2(char p1, int p2) { return p1; }

short fn3(short p1, short p2) { return p2; }

unsigned p;

void fn5(p1) { p = p1; }

unsigned u;

unsigned v_0_3;

short fn11() {

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

    int i;

    for (i = 0; i < 9; i++)
      e0 = 0x9EE7F9D1C772505B;
    e1 = 0x9EE7F9D1C772505B;
    e2 = 0x9EE7F9D1C772505B;
    e3 = 0x9EE7F9D1C772505B;
    e4 = 0x9EE7F9D1C772505B;
    e5 = 0x9EE7F9D1C772505B;
    e6 = 0x9EE7F9D1C772505B;
    e7 = 0x9EE7F9D1C772505B;
    e8 = 0x9EE7F9D1C772505B;

    d = fn2(v_0_3 = fn3(4L, d), 3) + e0;

  }

  return 0;
}

int main() {

  fn11();
  fn5(v_0_3);
  printf("checksum = %X\n", p);
  return 0;
}
