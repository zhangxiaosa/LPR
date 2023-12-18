#include <stdio.h>

char fn2(char p1, int p2) { return p1; }

short fn3(short p1, short p2) { return p2; }

unsigned u;
unsigned v_value;

int main() {
  int d = 2;
  unsigned e = 0x9EE7F9D1C772505BLL; // Optimized constant value

  for (; u < 51; ++u) {
    d = fn2(2, 3) + e;
  }

  printf("checksum = %x\n", 2 + e);
  return 0;
}