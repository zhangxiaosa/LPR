char fn2(char p1, int p2) { return p1; }

short fn3(short p1, short p2) { return p2; }

unsigned p;
unsigned u;
unsigned v_0_3;
unsigned e_0;
unsigned e_1;
unsigned e_2;
unsigned e_3;
unsigned e_4;
unsigned e_5;
unsigned e_6;
unsigned e_7;
unsigned e_8;

int main() {
  int d = 2L;
  for (; u < 51; ++u) {
    e_0 = 0x9EE7F9D1C772505B;
    e_1 = 0x9EE7F9D1C772505B;
    e_2 = 0x9EE7F9D1C772505B;
    e_3 = 0x9EE7F9D1C772505B;
    e_4 = 0x9EE7F9D1C772505B;
    e_5 = 0x9EE7F9D1C772505B;
    e_6 = 0x9EE7F9D1C772505B;
    e_7 = 0x9EE7F9D1C772505B;
    e_8 = 0x9EE7F9D1C772505B;

    d = fn2(v_0_3 = fn3(4L, d), 3) + e_0;
  }

  p = v_0_3;
  printf("checksum = %X\n", p);
  return 0;
}