void fn1(unsigned p1, int p2) {
  printf("checksum = %X\n", p1);
}

char fn2(char p1, int p2) {
  return p1;
}

short fn3(short p1, short p2) {
  return p2;
}

unsigned fn4(unsigned p1, unsigned p2) {
  return p1 + p2;
}

unsigned p;

void fn5(p1) {
  p = p1;
}

void fn6(p1) {
  fn5(p1);
}

unsigned t;
unsigned u;
unsigned v_0_3;

unsigned fn9(unsigned p1, unsigned p2, int p3, unsigned p4, int p5);

int fn11() {
  char a = 0xFBL;
  fn9(a, a, t, 18446744073709551613UL, t);
  return 0;
}

unsigned fn9(unsigned p1, unsigned p2, int p3, unsigned p4, int p5) {
  unsigned c = 255UL;
  int d = 2L;
  for (; u < 51; ++u) {
    unsigned e[9];
    int i;
    for (i = 0; i < 9; i++)
      e[i] = 0x9EE7F9D1C772505BLL;
    d = (v_0_3 = (short)p3, 3) + e[0];
    // Rest of the loop body
  }
  return p2;
}

int main() {
  int f = 0;
  fn11();
  fn6(v_0_3);
  fn1(p, f);
  return 0;
}