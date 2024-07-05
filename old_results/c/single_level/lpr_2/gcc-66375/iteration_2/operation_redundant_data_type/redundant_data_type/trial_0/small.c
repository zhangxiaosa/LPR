void fn1(unsigned int p1, int p2) { printf("checksum = %X\n", p1); }

char fn2(char p1, int p2) { return p1; }

short fn3(short p1, short p2) { return p2; }

unsigned int fn4(unsigned int p1, unsigned int p2) { return p1 + p2; }

unsigned int p;
unsigned int u;
unsigned int v[1][4];

short fn11() {
  int b = 0L;
  int d = 2L;

  for (; u < 51; ++u) {
    unsigned int e[9];
    e[0] = 0x9EE7F9D1C772505BLL;
    d = fn4(fn2(v[0][3] = fn3(4L, d), 3), e[0]);
  }

  return b;
}

int main() {
  int i, j;
  int f = 0;

  fn11();

  for (i = 0; i < 1; i++) {
    for (j = 0; j < 4; j++) {
      p = v[i][j];
    }
  }

  fn1(p, f);

  return 0;
}