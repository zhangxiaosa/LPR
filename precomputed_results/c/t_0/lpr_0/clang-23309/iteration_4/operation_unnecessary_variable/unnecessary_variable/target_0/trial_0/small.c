#include <stdio.h>

unsigned fn3(unsigned p1, unsigned p2) {
  return p1 - p2;
}

unsigned char fn4(int p1, int p2) {
  return p1;
}

int t;
short w;
short ac = 1L;

int main() {
  int an;
  for (w = 3; w; w -= 1) {
    t = ac;
    short ao = 0xBCD1L;
    if (fn3(ao, fn4(1L - an, 0xECL)) - t & 1L) {
      // Code inside the if statement removed
    }
  }
  printf("checksum = %lX\n", (long)0);
  return 0;
}