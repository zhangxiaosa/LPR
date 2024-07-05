void fn1(unsigned p1, int p2) { printf("checksum = %X\n", p1); }

char fn2(char p1, int p2) { return p1; }

short fn3(short p1, short p2) { return p2; }

unsigned fn4(unsigned p1, unsigned p2) { return p1 + p2; }

void fn7(unsigned p1, char *p2, int p3) {}

unsigned t;
unsigned u;
unsigned v_00;
unsigned fn8(char, int);
unsigned fn9(unsigned, unsigned, int, unsigned, int);
int fn10(int, unsigned, unsigned, int);
short fn11() {
  fn8(t, 0xFBL);
  return 0L;
}

unsigned fn9(unsigned p1, unsigned p2, int p3, unsigned p4, int p5) {
  fn10(6, 255UL, 1, p1);
  return p2;
}

int fn10(int p1, unsigned p2, unsigned p3, int p4) {
  for (; u < 51; ++u) {
    unsigned e[9];
    int i;
    for (i = 0; i < 9; i++)
      e[i] = 0x9EE7F9D1C772505BLL;
    fn4(fn2(v_00 = fn3(4L, 2L), 3), e[0]);
  }
  return 3;
}

int main() {
  int f = 0;
  fn11();
  fn7(v_00, "g_1729[i][j]", f);
  fn1(p, f);
  return 0;
}