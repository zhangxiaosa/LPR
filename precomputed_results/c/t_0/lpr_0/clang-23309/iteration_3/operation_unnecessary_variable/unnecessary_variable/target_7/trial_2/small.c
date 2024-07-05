#include <stdio.h>

unsigned fn2(int p1, int p2) {
  return p1 - p2;
}

unsigned fn3(unsigned p1, unsigned p2) {
  return p1 - p2;
}

unsigned char fn4(int p1, int p2) {
  return p1;
}

int p;
int t;
short ac = 1L;

int main() {
  int an;
  if (1) {
    t = 1;
    if (fn2(fn3(0, fn4(1L - 0, 0xECL)), t) & 1L)
      p = 1L;
  }
  printf("checksum = %lX\n", (long)p);
  return 0;
}