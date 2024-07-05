char fn2(char p1, int p2) { return p1; }

short fn3(short p1, short p2) { return p2; }

int fn4(int p1, int p2) { return p1 + p2; }

int p;

void fn5(int p1) { p = p1; }

int t;

int u;

int v_00;

int fn9(int p1, int p2, int p3, int p4, int p5) {
  int d = 2L;
  for (; u < 51; ++u) {
    int e0 = 0x9EE7F9D1C772505B;
    int e1 = 0x9EE7F9D1C772505B;
    int e2 = 0x9EE7F9D1C772505B;
    int e3 = 0x9EE7F9D1C772505B;
    int e4 = 0x9EE7F9D1C772505B;
    int e5 = 0x9EE7F9D1C772505B;
    int e6 = 0x9EE7F9D1C772505B;
    int e7 = 0x9EE7F9D1C772505B;
    int e8 = 0x9EE7F9D1C772505B;

    d = fn4(fn2(v_00 = fn3(4L, d), 3), e0);
  }
  return p2;
}

short fn11() {
  fn9(0xFBL, 0xFBL, t, 18446744073709551613UL, t);
  return 0L;
}

int main() {
  fn11();
  fn5(v_00);
  printf("checksum = %X\n", p);
  return 0;
}