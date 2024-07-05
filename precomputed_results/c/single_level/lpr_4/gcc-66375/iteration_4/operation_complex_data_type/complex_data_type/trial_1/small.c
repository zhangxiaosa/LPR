void fn1(unsigned p1, int p2) { printf("checksum = %X\n", p1); }
char fn2(char p1, int p2) { return p1; }
short fn3(short p1, short p2) { return p2; }
unsigned p;
unsigned u;
unsigned v_3;
int main() {
  int d = 2L;
  for (; u < 51; ++u) {
    unsigned e[9];
    unsigned e_0 = 0x9EE7F9D1C772505B;
    unsigned e_1;
    unsigned e_2;
    unsigned e_3;
    unsigned e_4;
    unsigned e_5;
    unsigned e_6;
    unsigned e_7;
    unsigned e_8;
    e_0 = 0x9EE7F9D1C772505B;
    v_3 = fn3(4L, d);
    d = fn2(v_3, 3);
    d = d + e_0;
  }
  p = v_3;
  fn1(p, 0);
  return 0;
}