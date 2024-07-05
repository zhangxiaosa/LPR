#include <stdio.h>

short fn13() {
  short al = 3;
  return al;
}

int main() {
  short p;
  p = fn13();
  printf("checksum = %X\n", p);
  return 0;
}