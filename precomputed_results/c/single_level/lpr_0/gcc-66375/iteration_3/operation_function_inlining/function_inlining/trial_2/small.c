char fn2(char p1, int p2) { return p1; }
short fn3(short p1, short p2) { return p2; }
int fn4(int p1, int p2) { return p1 + p2; }

unsigned p;
void fn5(p1) { p = p1; }
void fn6(p1) { fn5(p1); }
unsigned t;
unsigned u;
unsigned v_00;

unsigned fn9(int p1, int p2, int p3, unsigned p4, int p5) {
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
    d = fn4(fn2(v_00 = fn3(4L, d), 3), e[0]);
  }
  return 3;
}

int main() {
  fn11();
  fn6(v_00);
  printf("checksum = %X\n", p);
  return 0;
}