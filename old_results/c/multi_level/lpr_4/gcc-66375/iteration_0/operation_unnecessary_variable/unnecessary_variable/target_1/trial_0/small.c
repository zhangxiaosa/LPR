char fn2(char p1, int p2) { return p1; }

short fn3(short p1, short p2) { return p2; }

int fn4(int p1, int p2) { return p1 + p2; }

int p;
int u;
int v_0_3;
int fn11() {
  int d = 2L;
  for (; u < 51; ++u) {
    v_0_3 = fn3(4L, d);
    d = fn4(v_0_3, 3);
  }
  return 0;
}

int main() {
  fn11();
  p = v_0_3;
  printf("checksum = %X\n", p);
  return 0;
}