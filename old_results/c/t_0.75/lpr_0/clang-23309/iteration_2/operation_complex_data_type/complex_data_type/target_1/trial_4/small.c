#include <stdio.h>

short result;
short flag;
short loopCounter;

short fn4(short p1) {
  return p1;
}

short fn11(short p1, short p2, int p3) {
  short am = 1;
  int an;
  for (loopCounter = 3; loopCounter; loopCounter -= 1) {
    if ((an = 250)) {
      p3 = p2 || (an = loopCounter) == 0x294A85636008822DLL;
      short ao = 0xBCD1;
      if ((ao - fn4(am - an, 0xEC) - p3) & 1)
        flag = 1;
    }
  }
  return 1;
}

int main() {
  short ag = 248;
  fn11(2, ag, 0);
  result = flag;
  printf("checksum = %X\n", result);
  return 0;
}