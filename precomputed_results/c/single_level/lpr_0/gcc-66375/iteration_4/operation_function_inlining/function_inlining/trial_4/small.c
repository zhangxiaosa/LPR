char fn2(char p1, int p2) { return p1; }
short fn3(short p1, short p2) { return p2; }
int fn4(int p1, int p2) { return p1 + p2; }
unsigned p;
void fn5(p1) { p = p1; }
unsigned t;
unsigned u;
unsigned v_00;
unsigned fn8(char p1, int p2) {
  fn10(6, 255UL, 1, p2);
  return p1;
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
short fn11() {
  fn10(6, 255UL, 1, 255UL);
  return 0L;
}
int main() {
  fn11();
  fn5(v_00);
  printf("checksum = %X\n", p);
  return 0;
}