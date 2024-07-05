char fn2(char p1, int p2) { return p1; }
short fn3(short p1, short p2) { return p2; }
unsigned fn4(unsigned p1, unsigned p2) { return p1 + p2; }

void fn5(unsigned p1) {}
void fn7(unsigned p1, char *p2, int p3) { fn5(p1); }

unsigned t;
unsigned u;
unsigned v_0_3;

unsigned fn8(char p1, int p2) {
  fn9(p2, t, t);
  return p1;
}

unsigned fn9(unsigned p1, int p2, int p4) {
  fn10(6, 255UL, 1, p1);
  return p2;
}

int fn10(int p1, unsigned p2, unsigned p3, int p4) {
  int d = 2L;
  for (; u < 51; ++u) {
    unsigned e[9];
    int i;
    for (i = 0; i < 9; i++)
      e[i] = 0x9EE7F9D1C772505BLL;
    d = fn4(fn2(v_0_3 = fn3(4L, d), 3), e[0]);
  }
  return 3;
}

int fn11() {
  char a = 0xFBL;
  int b = 0L;
  fn8(t, a);
  return b;
}

int main() {
  int f = 0;
  fn11();
  fn7(v_0_3, "g_1729[i][j]", f);
  return 0;
}