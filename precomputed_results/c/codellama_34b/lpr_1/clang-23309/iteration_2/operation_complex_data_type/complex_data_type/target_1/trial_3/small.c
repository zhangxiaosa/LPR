
#include <stdio.h>

// Decomposition of `fn10` into variables with primary data types
short p1, p2;
unsigned short p1_short, p2_short;
unsigned char p1_char, p2_char;
unsigned char ac;
unsigned char an;
unsigned char w;
unsigned int v;

// Implementation of `fn10` using primary data types
unsigned char fn10(short p1, short p2) {
  p1_short = (unsigned short)p1;
  p2_short = (unsigned short)p2;
  p1_char = (unsigned char)(p1_short & 0xFF);
  p2_char = (unsigned char)(p2_short & 0xFF);
  ac = (unsigned char)p1_char;
  an = (unsigned char)p2_char;
  w = 3;
  while (w != 0) {
    an = (unsigned char)((an << 8) | p2_char);
    if (fn2(fn3(0xBCD1, 1 - an), p2) & 1) {
      v = 1;
    }
    w--;
  }
  return v;
}

// Implementation of `fn13` using primary data types
short fn13() {
  fn10(0, 0);
  return 1;
}

int main() {
  fn13();
  printf("checksum = %X\n", v);
  return 0;
}
