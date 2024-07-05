#include <stdio.h>

unsigned fn3(unsigned p1, unsigned p2) { return p1 - p2; }
unsigned char fn4(int p1, int p2) { return p1; }

int p = 1;
int t;
short ac = 1L;

int main() {
  int an = 250L;

  t = ac || (an = 3) == 0x294A85636008822DL;
  if (fn3(0xBCD1L, fn4(1L - 3, 0xECL)) - t) {
    p = 1L;
  }

  t = ac || (an = 2) == 0x294A85636008822DL;
  if (fn3(0xBCD1L, fn4(1L - 2, 0xECL)) - t) {
    p = 1L;
  }

  t = ac || (an = 1) == 0x294A85636008822DL;
  if (fn3(0xBCD1L, fn4(1L - 1, 0xECL)) - t) {
    p = 1L;
  }

  return 0;
}