char fn2(char p1, int p2) { return p1; }
short fn3(short p1, short p2) { return p2; }
int fn4(int p1, int p2) { return p1 + p2; }

int u;
int v_0_3;

int fn11() {
  int d = 2L;
  for (; u < 51; ++u) {
    v_0_3 = fn2(fn3(4L, d), 3);
    d = fn4(v_0_3, 0x9EE7F9D1C772505BLL);
  }
  return 0;
}

int main() {
  fn11();
  printf("checksum = %X\n", v_0_3);
  return 0;
}