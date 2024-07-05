char fn2(char p1, int p2) {
  return p1;
}

int fn3(int p1, int p2) {
  return p2;
}

unsigned fn4(unsigned p1, unsigned p2) {
  return p1 + p2;
}

unsigned p;
unsigned u;
unsigned v_03;

int fn11() {
  for (; u < 51; ++u) {
    unsigned e[9];
    e[0] = 0x9EE7F9D1C772505BLL;
    v_03 = fn4(fn2(fn3(4L, v_03), 3), e[0]);
  }
  return 0;
}

int main() {
  fn11();
  p = v_03;
  printf("checksum = %X\n", p);
  return 0;
}