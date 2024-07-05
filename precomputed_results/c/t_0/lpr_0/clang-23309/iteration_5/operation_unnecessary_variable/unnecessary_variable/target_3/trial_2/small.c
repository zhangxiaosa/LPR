#include <stdio.h>

unsigned fn3(unsigned p1, unsigned p2) {
  return p1 - p2;
}

unsigned char fn4(int p1, int p2) {
  return p1;
}

int main() {
  int p = 1L;
  printf("checksum = %lX\n", (long)p);
  return 0;
}