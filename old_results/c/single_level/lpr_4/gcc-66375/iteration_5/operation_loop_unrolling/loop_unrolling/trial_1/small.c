void fn1(unsigned p1, int p2) { printf("checksum = %X
", p1); }

char fn2(char p1, int p2) { return p1; }

unsigned p;
unsigned u;
unsigned v_3;
int main() {
  int d = 2L;

  // Unrolled loop
  v_3 = d;
  d = fn2(v_3, 3);
  d = d + 0x9EE7F9D1C772505B;

  v_3 = d;
  d = fn2(v_3, 3);
  d = d + 0x9EE7F9D1C772505B;

  // Repeat the above two lines 49 more times

  v_3 = d;
  d = fn2(v_3, 3);
  d = d + 0x9EE7F9D1C772505B;

  p = v_3;
  fn1(p, 0);

  return 0;
}