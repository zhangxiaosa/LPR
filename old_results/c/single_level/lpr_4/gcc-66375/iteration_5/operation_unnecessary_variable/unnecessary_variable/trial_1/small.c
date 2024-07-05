void fn1(unsigned p1, int p2) { printf("checksum = %X\n", p1); }
char fn2(char p1, int p2) { return p1; }
unsigned p;
unsigned u;
int main() {
  int d = 2L;
  for (; u < 51; ++u) {
    d = fn2(d, 3);
    d = d + 0x9EE7F9D1C772505B;
  }
  p = d;
  fn1(p, 0);
  return 0;
}