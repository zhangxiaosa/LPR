char fn2(char p1, int p2) { return p1; }
short fn3(short p1, short p2) { return p2; }
unsigned fn4(unsigned p1, unsigned p2) { return p1 + p2; }
unsigned p;
void fn5(unsigned p1) { p = p1; }
unsigned u;
unsigned fn10(int p1, unsigned p2, unsigned p3, int p4) {
  int d = 2L;
  unsigned v_0_3 = fn3(4L, d);
  unsigned e[9];
  int i;
  for (i = 0; i < 9; i++)
    e[i] = 0x9EE7F9D1C772505BLL;
  d = fn4(fn2(v_0_3, 3), e[0]);
  return 3;
}
int fn11() {
  fn10(6, 255UL, 1, 0xFBL);
  return 0;
}
int main() {
  fn11();
  fn5(fn10(6, 255UL, 1, 0xFBL));
  printf("checksum = %%X\n", p);
  return 0;
}