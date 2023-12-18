static short g_new = 0x7EBA;
unsigned h = 0xCA;
short i;
int j[5][5];
unsigned k = 0xAF7C65D6L;
unsigned m[9][2][3];
int n;

unsigned fn1(int, short, int, int);
int fn2(int);

unsigned fn3() {
  fn1(fn2(0), 7, 7, 0);
  return n;
}

unsigned fn1(int p1, short p2, int p3, int p4) {
  return p1;
}

int fn2(int) {
  unsigned v[6][3][2];
  int w = 0x709BFC8AL;
  if (k) {
    return v[g_new][0][0];
  }
  if (h) {
    // Do nothing
  } else {
    return j[g_new][g_new];
  }
  return w;
}

int main() {
  fn3();
}
