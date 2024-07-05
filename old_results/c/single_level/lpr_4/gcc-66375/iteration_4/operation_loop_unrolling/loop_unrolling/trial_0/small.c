void fn1(unsigned p1, int p2) { printf("checksum = %X\n", p1); }
char fn2(char p1, int p2) { return p1; }
short fn3(short p1, short p2) { return p2; }
unsigned p;
unsigned u = 0;
unsigned v_3 = 0;
int main() {
  int d = 2L;
  for (; u < 51; u += 5) {
    unsigned e[9];
    e[0] = 0x9EE7F9D1C772505B;
    v_3 = fn3(4L, d);
    d = fn2(v_3, 3);
    d += e[0];

    e[1] = 0x9EE7F9D1C772505B;
    v_3 = fn3(4L, d);
    d = fn2(v_3, 3);
    d += e[1];

    e[2] = 0x9EE7F9D1C772505B;
    v_3 = fn3(4L, d);
    d = fn2(v_3, 3);
    d += e[2];

    e[3] = 0x9EE7F9D1C772505B;
    v_3 = fn3(4L, d);
    d = fn2(v_3, 3);
    d += e[3];

    e[4] = 0x9EE7F9D1C772505B;
    v_3 = fn3(4L, d);
    d = fn2(v_3, 3);
    d += e[4];
  }

  p = v_3;
  fn1(p, 0);
  return 0;
}