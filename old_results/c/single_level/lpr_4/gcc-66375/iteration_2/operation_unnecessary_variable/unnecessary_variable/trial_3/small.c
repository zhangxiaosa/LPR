void fn1(unsigned p1, int p2) { printf("checksum = %X\n", p1); }

char fn2(char p1, int p2) { return p1; }

short fn3(short p1, short p2) { return p2; }

unsigned fn4(unsigned p1, unsigned p2) { return p1 + p2; }

unsigned p;
unsigned t;
unsigned u;

unsigned fn8(char p1, int p2) {
  int d = 2L;
  for (; u < 51; ++u) {
    unsigned e[9];
    e[0] = 0x9EE7F9D1C772505B;
    unsigned v_3_temp = fn3(4L, d);
    d = fn2(v_3_temp, 3);
    d = fn4(d, e[0]);
  }
  return p1;
}

int main() {
  int b = 0L;
  fn8(t, 0xFBL);
  p = fn3(4L, 2L);  // Replaced v_3 with value assigned to it inside the loop
  fn1(p, 0);
  return b;
}