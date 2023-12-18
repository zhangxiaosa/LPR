char fn2(char p1, int p2) { return p1; }
short fn3(short p1, short p2) { return p2; }
int fn4(int p1, int p2) { return p1 + p2; }
int p;
int u;
int fn11() {
  int d = 2L;
  for (; u < 51; ++u) {
    d = fn4(fn2(fn3(4L, d), 3), 0x9EE7F9D1C772505BLL);
  }
  return 0;
}
int main() {
  fn11();
  p = 0x9EE7F9D1C772505BLL;
  printf("checksum = %X\n", p);
  return 0;
}