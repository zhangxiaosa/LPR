void fn1(unsigned p1, int p2) { printf("checksum = %X\n", p1); }

char fn2(char p1, int p2) { return p1; }

short fn3(short p1, short p2) { return p2; }

unsigned fn4(unsigned p1, unsigned p2) { return p1 + p2; }

unsigned p;
unsigned u;
unsigned v[1][4];

short fn11() {
  int b = 0L;
  int d = 2L;

  unsigned e[9];
  e[0] = 0x9EE7F9D1C772505BLL;

  // Unroll the loop
  d = fn4(fn2(v[0][3] = fn3(4L, d), 3), e[0]);
  u++;

  d = fn4(fn2(v[0][3] = fn3(4L, d), 3), e[0]);
  u++;

  d = fn4(fn2(v[0][3] = fn3(4L, d), 3), e[0]);
  u++;

  d = fn4(fn2(v[0][3] = fn3(4L, d), 3), e[0]);
  u++;

  d = fn4(fn2(v[0][3] = fn3(4L, d), 3), e[0]);
  u++;

  // Repeat the unrolled iterations until u < 51
  while (u < 51) {
    d = fn4(fn2(v[0][3] = fn3(4L, d), 3), e[0]);
    u++;

    d = fn4(fn2(v[0][3] = fn3(4L, d), 3), e[0]);
    u++;

    d = fn4(fn2(v[0][3] = fn3(4L, d), 3), e[0]);
    u++;

    d = fn4(fn2(v[0][3] = fn3(4L, d), 3), e[0]);
    u++;

    d = fn4(fn2(v[0][3] = fn3(4L, d), 3), e[0]);
    u++;
  }

  return b;
}

int main() {
  int i, j;
  int f = 0;

  fn11();

  // Unroll the nested loop
  p = v[0][0];
  p = v[0][1];
  p = v[0][2];
  p = v[0][3];

  fn1(p, f);
  return 0;
}