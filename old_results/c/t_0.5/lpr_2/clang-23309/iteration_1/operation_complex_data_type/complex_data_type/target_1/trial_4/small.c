#include <stdio.h>

unsigned v;
short w;
short ac = 1;

short fn13() {
  for (w = 3; w; w -= 1) {
    if (ac) {
      short ao = 0xBCD1;
      if ((ao - 1 - ac) & 1)
        v = 1;
    }
  }
  return 3;
}

int main() {
  fn13();
  printf("checksum = %X\n", v);
  return 0;
}