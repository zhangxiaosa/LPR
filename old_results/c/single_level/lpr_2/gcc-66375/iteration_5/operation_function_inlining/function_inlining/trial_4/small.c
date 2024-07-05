int fn3(int p1, int p2) { return p2; }
unsigned fn4(unsigned p1, unsigned p2) { return p1 + p2; }
unsigned u;
unsigned v_03;
int main() {
  int d = 2L;
  for (; u < 51; ++u) {
    unsigned e[9];
    e[0] = 0x9EE7F9D1C772505BLL;
    v_03 = fn3(4L, d);
    d = fn4(v_03, 3);
    d = fn4(d, e[0]);
  }
  printf("checksum = %X\n", v_03);
  return 0;
}