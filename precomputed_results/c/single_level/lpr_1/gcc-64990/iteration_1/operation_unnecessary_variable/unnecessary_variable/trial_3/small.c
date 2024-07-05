typedef unsigned d;

static short g = 0x7EBA;

short i;
int j[5][5];
unsigned k = 0xAF7C65D6L;

unsigned m[9][2][3];

unsigned fn1(signed, short, int, signed);
signed fn2();
unsigned fn3() {
  fn1(fn2(0), 7, 7, 0);
  return 0;
}

unsigned fn1(signed p1, short p2, int p3, signed p4) {
  return 2;
}

signed fn2() {
  unsigned v[6][3][2];
  int w = 0x709BFC8A;
  i = 0;
  return v[g][g][l];
}

int main() {
  fn1(fn2(), 7, 7, 0);
  return 0;
}