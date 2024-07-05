char fn2(char p1, int p2) { return p1; }

int fn3(int p1, int p2) { return p2; }

unsigned fn4(unsigned p1, unsigned p2) { return p1 + p2; }

unsigned u;
unsigned v_03;
int main() {
  int d = 2L;
  for (; u < 51; ++u) {
    unsigned e0, e1, e2, e3, e4, e5, e6, e7, e8;
    e0 = 0x9EE7F9D1C772505BLL;
    d = fn4(fn2(v_03 = fn3(4L, d), 3), e0);
  }
  printf("checksum = %X\n", v_03);
  return 0;
}