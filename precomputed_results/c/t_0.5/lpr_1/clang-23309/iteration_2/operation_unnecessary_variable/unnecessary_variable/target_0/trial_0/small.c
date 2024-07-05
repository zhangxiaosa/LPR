#include <stdio.h>

char fn4(unsigned p1, unsigned p2) {
  return p1;
}

short t;
int w;
short ac = 1;

int main() {
  int an = 250;
  short ao = 0xBCD1;
  
  for (w = 3; w; w -= 1) {
    t = ac;
    if ((ao - fn4(-249, 0xEC) - t) % 2) {
      // No assignment to p
    }
  }
  
  printf("checksum = %X\n", 0);
  return 0;
}