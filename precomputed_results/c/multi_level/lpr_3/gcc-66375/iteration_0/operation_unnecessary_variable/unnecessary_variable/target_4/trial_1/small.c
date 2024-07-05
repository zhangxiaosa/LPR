#include <stdio.h>

char fn2(char p1, int p2) { return p1; }

short fn3(short p1, short p2) { return p2; }

unsigned v_value;

int main() {
  int d = 2;
  unsigned e = 0x9EE7F9D1C772505BLL; // Optimized constant value

  for (; ; ) {
    d = fn2(v_value = fn3(4, d), 3) + e;
    break; // Exit the loop immediately
  }

  printf("checksum = %x\n", v_value);
  return 0;
}