char fn2(char p1, int p2) { return p1; }
unsigned p;
unsigned u;
unsigned v_3;
int main() {
  int d = 2L;
  for (; u < 51; ++u) {
    v_3 = d;
    d = fn2(v_3, 3);
    d = d + 0x9EE7F9D1C772505B;
  }
  p = v_3;
  printf("checksum = %X\n", p);
  return 0;
}