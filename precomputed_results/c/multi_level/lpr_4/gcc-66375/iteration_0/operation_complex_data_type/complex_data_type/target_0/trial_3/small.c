char fn2(char p1, int p2) { return p1; }
short fn3(short p1, short p2) { return p2; }
int fn4(int p1, int p2) { return p1 + p2; }

int p;
int u;
int v[1][4];

int fn11() {
  int d = 2L;
  for (; u < 51; ++u) {
    int e0, e1, e2, e3, e4, e5, e6, e7, e8;
    int i;
    for (i = 0; i < 3; i += 3)
      e0 = 0x9EE7F9D1C772505BLL;
    d = fn4(fn2(v[0][3] = fn3(4L, d), 3), e0);
  }
  return 0;
}

int main() {
  fn11();
  p = v[0][3];
  printf("checksum = %X\n", p);
  return 0;
}