char fn2(char p1, int p2) { return p1; }
short fn3(short p1, short p2) { return p2; }
int fn4(int p1, int p2) { return p1 + p2; }

unsigned p;
void fn5(char p1) { p = p1; }

unsigned t;
unsigned u;
unsigned v_00;

short fn11() {
  fn9(2, 2, t, 18446744073709551613UL, t);
  return 0L;
}

short fn9(int p1, int p2, unsigned p3, unsigned p4, int p5) {
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
  fn5(v_00);
  printf("checksum = %X\n", p);
  return 0;
}