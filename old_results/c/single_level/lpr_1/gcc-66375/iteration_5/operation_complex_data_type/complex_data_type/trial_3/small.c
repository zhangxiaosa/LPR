char fn2(char p1, int p2) { return p1; }

short fn3(short p1, short p2) { return p2; }

unsigned fn4(unsigned p1, unsigned p2) { return p1 + p2; }

unsigned p;

void fn5(p1) { p = p1; }

unsigned u;

unsigned v_0_3;

short fn11() {

  int d = 2L;

  for (; u < 51; ++u) {

    unsigned e[9];

    int i;

    for (i = 0; i < 9; i++)

      e[i] = 0x9EE7F9D1C772505BLL;

    unsigned e0 = e[0];
    unsigned e1 = e[1];
    unsigned e2 = e[2];
    unsigned e3 = e[3];
    unsigned e4 = e[4];
    unsigned e5 = e[5];
    unsigned e6 = e[6];
    unsigned e7 = e[7];
    unsigned e8 = e[8];

    d = fn4(fn2(v_0_3 = fn3(4L, d), 3), e0);
  }

  return 0;
}

int main() {

  fn11();

  fn5(v_0_3);

  printf("checksum = %X\n", p);

  return 0;
}