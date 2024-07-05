char fn2(char p1) {
  return p1;
}

int u;
short v0_3;

short fn11() {
  for (; u < 51; ++u) {
    v0_3 = 2;
    fn2(v0_3);
  }
  return 0;
}

int main() {
  fn11();
  printf("checksum = %X\n", v0_3);
  return 0;
}