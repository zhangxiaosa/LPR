char fn2(char p1, int p2) { return p1; }
short fn3(short p1, short p2) { return p2; }

unsigned p;
unsigned u;
unsigned v[1][4];

int fn10(int p1, unsigned p2, unsigned p3, int p4) {
  int d = 2;
  for (; u < 51u; ++u) {
    unsigned e[9];
    unsigned i;
    for (i = 0; i < 9; i++)
      e[i] = 0x9EE7F9D1C772505Bu;
    d = fn2(v[0][3] = fn3(4, d), 3) + e[0];
  }
  return 3;
}

short fn11() {
  fn10(6, 255uL, 1, 0L);
  return 0L;
}

int main(void) {
  unsigned j;
  fn11();
  for (j = 0; j < 4u; j++)
    p = v[0][j];
  return 0;
}