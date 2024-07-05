char fn2(char p1, int p2) { return p1; }
short fn3(short p1, short p2) { return p2; }
unsigned fn4(unsigned p1, unsigned p2) { return p1 + p2; }
unsigned p;
void fn5(unsigned p1) { p = p1; }
unsigned u;
unsigned v_0_3;

short fn11() {
  int d = 2L;

  // Unrolled loop iteration 1
  unsigned e1[9];
  int i1;
  for (i1 = 0; i1 < 9; i1++)
    e1[i1] = 0x9EE7F9D1C772505BLL;
  d = fn4(fn2(v_0_3 = fn3(4L, d), 3), e1[0]);

  // Unrolled loop iteration 2
  unsigned e2[9];
  int i2;
  for (i2 = 0; i2 < 9; i2++)
    e2[i2] = 0x9EE7F9D1C772505BLL;
  d = fn4(fn2(v_0_3 = fn3(4L, d), 3), e2[0]);

  // Unrolled loop iteration 3
  unsigned e3[9];
  int i3;
  for (i3 = 0; i3 < 9; i3++)
    e3[i3] = 0x9EE7F9D1C772505BLL;
  d = fn4(fn2(v_0_3 = fn3(4L, d), 3), e3[0]);

  // ... Repeat unrolled loop iterations up to 51 (if needed)

  return 0;
}

int main() {
  fn11();
  fn5(v_0_3);
  printf("checksum = %X\n", p);
  return 0;
}