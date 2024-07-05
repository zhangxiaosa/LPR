char fn2(char p1, int p2) { return p1; }
short fn3(short p1, short p2) { return p2; }
int fn4(int p1, int p2) { return p1 + p2; }
int p;
int u;
int v_0_3;
int fn11() {
  for (; u < 51; ++u) {
    int e0;
    e0 = 0x9EE7F9D1C772505BLL;
    fn4(fn2(v_0_3 = fn3(4L, d), 3), e0);
  }
  return 0;
}
int main() {
  fn11();
  p = v_0_3;
  printf("checksum = %X\n", p);
  return 0;
}