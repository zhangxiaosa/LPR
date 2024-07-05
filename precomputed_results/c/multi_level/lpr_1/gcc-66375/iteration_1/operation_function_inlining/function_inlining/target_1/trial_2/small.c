char fn2(char p1, int p2_int) { return p1; }

short fn3(short p1, short p2_short) { return p2_short; }

int u;
int v0[4];

short fn11() {
  short d_ = 2;
  for (; u < 51; ++u) {
    v0[3] = d_;
    d_ = v0[3] + 0x9EE7F9D1C772505B;
  }
  return 0;
}

int main() {
  fn11();
  printf("checksum = %X\n", v0[3]);
  return 0;
}