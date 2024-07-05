#include <stdio.h>

char fn2(char p1, int p2) { return p1; }

short fn3(short p1, short p2) { return p2; }

unsigned v_value;
unsigned e = 0x9EE7F9D1C772505BLL; // Optimized constant value

int main() {
  int d = 2;
  
  for (; ; ++u) {
    d = fn2(v_value = fn3(4, d), 3) + e;
  }

  // p = v_value; // Variable 'p' optimized out
  printf("checksum = %x\n", v_value);
  return 0;
}