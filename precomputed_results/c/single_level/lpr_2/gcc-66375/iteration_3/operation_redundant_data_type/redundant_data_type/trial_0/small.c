char fn2(char p1, int p2) { return p1; }
short fn3(short p1, short p2) { return p2; }
unsigned int fn4(unsigned int p1, unsigned int p2) { return p1 + p2; }
unsigned int p;
unsigned int u;
unsigned int v[1][4];
short fn11() {
  int d = 2L;
  for (; u < 51; ++u) {
    unsigned int e[9];
    e[0] = 0x9EE7F9D1C772505BLL;
    d = fn4(fn2(v[0][3] = fn3(4L, d), 3), e[0]);
  }
  return 0;
}
int main() {
  fn11();
  p = v[0][3];
  printf("checksum = %X\n", p);
  return 0;
}