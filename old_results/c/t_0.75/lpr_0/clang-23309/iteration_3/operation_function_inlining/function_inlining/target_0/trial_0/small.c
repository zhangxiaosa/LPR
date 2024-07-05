#include <stdio.h>

short v;
short w;

short fn11(short p1, short p2, int p3) {
  if (true) {
    v = 1;
  }
}

int main() {
  if (true) {
    v = 1;
  }
  printf("checksum = %X\n", v);
  return 0;
}