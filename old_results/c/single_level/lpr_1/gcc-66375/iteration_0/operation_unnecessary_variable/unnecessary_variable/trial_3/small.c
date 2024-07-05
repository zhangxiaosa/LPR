void fn1(unsigned p1, int p2) { printf("checksum = %X\n", p1); }

char fn2(char p1, int p2) { return p1; }

short fn3(short p1, short p2) { return p2; }

unsigned fn4(unsigned p1, unsigned p2) { return p1 + p2; }

void fn9(unsigned p1, unsigned p2, int p3, unsigned p4, int p5) {
  unsigned c = 255UL;
  fn10(6, c, 1, p1);
}

int fn10(int p1, unsigned p2, unsigned p3, int p4) {
  int d = 2L;
  for (; u < 51; ++u) {
    unsigned e[9];
    int i;
    for (i = 0; i < 9; i++)
      e[i] = 0x9EE7F9D1C772505BLL;
    d = fn4(fn2(fn3(4L, d), 3), e[0]);
  }
  return 3;
}

int main() {
  fn10(0, 255UL, 1, 0);
  fn1(0, 0);
  return 0;
}