void fn1(unsigned p1, int p2) { printf("checksum = %X\n", p1); }
int fn2(int p1, int p2) { return p1; }
unsigned p;
unsigned u;
char v_3;
int main() {
  int d = 2L;
  for (; u < 51; ++u) {
    v_3 = d;
    d = fn2(v_3, 3);
    d = d + 0x9EE7F9D1C772505B;
  }
  p = v_3;
  fn1(p, 0);
  return 0;
}