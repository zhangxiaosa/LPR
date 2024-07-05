
#include <stdio.h>

void fn1(short p1, int p2) { printf("checksum = %X\n", p1); }

short fn2(short p1, short p2) { return p1 - p2; }

short fn3(short p1, short p2) { return p1 - p2; }

short fn5(short p1, short p2) { return p2; }

short fn6(short p1, short p2) { return p1 - p2; }

short p;

void fn9(short p1, char *p2) { p = p1; }

short t;
unsigned char u;
short v;
unsigned char w;
short ab;
unsigned char ac = 1;
unsigned char fn10(short, short);
unsigned char fn11_optimized(unsigned char);

short fn13() {
  short ae = 1;
  fn10(u, t);
  return ae;
}

unsigned char fn10(short p1, short p2) {
  short af = 0x2F2F6D26;
  unsigned char ag = 248;
  fn11_optimized(2, ag, p2, 1);
  return af;
}

unsigned char fn11_optimized(unsigned char u_char) {
  // Compute the checksum using a table-driven approach
  static const unsigned char checksum_table[] = {
    0x2F, 0x2F, 0x6D, 0x26, 0x29, 0x4A, 0x85, 0x63, 0x60, 0x08, 0x82, 0x2D
  };
  unsigned char checksum = 0;
  for (int i = 0; i < 12; i++) {
    checksum += checksum_table[i] * (u_char >> i);
  }
  return checksum;
}

int main() {
  fn13();
  fn9(v, "g_170");
  fn1(p, 0);
  return 0;
}
