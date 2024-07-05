void fn1(unsigned p1) { printf("checksum = %X\n", p1); }

char fn2(char p1) { return p1; }

short fn3(short p1) { return p1; }

unsigned fn4(unsigned p1, unsigned p2) { return p1 + p2; }

unsigned p;
unsigned t;
unsigned u;
unsigned v[1][4];

unsigned fn9(unsigned p1, unsigned p2) {
  int d = 2L;
  for (; u < 51; ++u) {
    unsigned e[9];
    e[0] = 0x9EE7F9D1C772505BLL;
    d = fn4(v[0][3] = d, e[0]);
  }
  return 3;
}

short fn11() {
  int b = 0L;
  fn9(b, b);
  return b;
}

int main() {
  int f = 0;
  fn11();
  for (int j = 0; j < 4; j++)
    p = v[0][j];
  fn1(p, f);
  return 0;
}