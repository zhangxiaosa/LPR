char fn2(char p1, int p2) { return p1; }

short fn3(short p1, short p2) { return p2; }

unsigned fn4(unsigned p1, unsigned p2) { return p1 + p2; }

unsigned p;

void fn5(p1) { p = p1; }

unsigned u;

unsigned v_0_3;

short fn11() {
  int d = 2L;
  for (; u < 51; ++u) {
    unsigned e0 = 0x9EE7F9D1C772505BLL;
    unsigned e1 = 0x9EE7F9D1C772505BLL;
    unsigned e2 = 0x9EE7F9D1C772505BLL;
    unsigned e3 = 0x9EE7F9D1C772505BLL;
    unsigned e4 = 0x9EE7F9D1C772505BLL;
    unsigned e5 = 0x9EE7F9D1C772505BLL;
    unsigned e6 = 0x9EE7F9D1C772505BLL;
    unsigned e7 = 0x9EE7F9D1C772505BLL;
    unsigned e8 = 0x9EE7F9D1C772505BLL;
    int i;
    for (i = 0; i < 9; i++)
      e[i] = 0x9EE7F9D1C772505BLL;
    d = fn4(fn2(v_0_3 = fn3(4L, d), 3), e0);
  }
  return 0;
}

int main() {
  fn11();
  fn5(v_0_3);
  printf("checksum = %X\n", p);
  return 0;
}