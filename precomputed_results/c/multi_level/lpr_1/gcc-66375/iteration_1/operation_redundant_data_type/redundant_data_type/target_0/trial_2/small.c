char fn2(char p1, int p2_int) {
  return p1;
}

char u;
char v0[4];

char fn11() {
  char d_ = 2;
  for (; u < 51; ++u) {
    v0[3] = d_;
    d_ = fn2(v0[3], 3) + 0x9E;
  }
  return 0;
}

int main() {
  fn11();
  printf("checksum = %c\n", v0[3]);
  return 0;
}