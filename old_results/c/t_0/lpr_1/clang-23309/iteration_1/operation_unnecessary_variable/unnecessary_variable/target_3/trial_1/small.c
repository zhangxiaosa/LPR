#include <stdio.h>

unsigned p;
int t;
short ac = 1L;

int main() {
  short ao = 0xBCD1L;
  int w;

  for (w = 3; w != 0; w -= 1) {
    if (250UL) {
      t = ac || w == 0x294A85636008822DLL;
      if (fn3(ao, fn4(1L - 250UL, 0xECL)) - t & 1UL)
        p = 1UL;
    }
  }

  printf("checksum = %X\n", p);
  return 0;
}