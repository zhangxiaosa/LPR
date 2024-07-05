char fn2(char p1, int p2_int) { return p1; }

int u;
short v0_0, v0_1, v0_2, v0_3;

short fn11() {
  short d_ = 2;
  for (; u < 51; ++u) {
    v0_3 = d_;
    d_ = fn2(v0_3, 3) + 0x9EE7F9D1C772505B;
  }
  return 0;
}

int main() {
  fn11();
  printf("checksum = %X\n", v0_3);
  return 0;
}