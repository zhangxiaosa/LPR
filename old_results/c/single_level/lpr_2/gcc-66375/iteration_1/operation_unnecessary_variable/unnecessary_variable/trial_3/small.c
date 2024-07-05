void fn1(unsigned p1) { printf("checksum = %X\n", p1); }

char fn2(char p1) { return p1; }

short fn3(short p1, short p2) { return p2; }

unsigned fn4(unsigned p1, unsigned p2) { return p1 + p2; }

unsigned p;

unsigned v[1][4];

unsigned fn9(unsigned p1, int p4) {
  for (unsigned u = 0; u < 51; ++u) {
    unsigned e[9];
    e[0] = 0x9EE7F9D1C772505BLL;
    fn4(fn2(v[0][3] = fn3(4L, 2L), 3), e[0]);
  }
  return 3;
}

short fn11() {
  fn9(0L, 0L);
  return 0L;
}

int main() {
  int i, j;
  fn11();
  for (i = 0; i < 1; i++)
    for (j = 0; j < 4; j++)
      p = v[i][j];
  fn1(p);
  return 0;
}