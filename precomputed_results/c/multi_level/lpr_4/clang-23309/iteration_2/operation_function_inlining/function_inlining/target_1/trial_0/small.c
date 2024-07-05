#include <stdio.h>

long v = 0;
short ac = 1;

char fn4(char p1, char p2) {
  return p1;
}

int main() {
  int p;
  short ao = 0xBCD1;

  // Loop unrolled with three iterations
  {
    int an = 250;
    short w = 3;

    {
      int t = ac || (an = w) == 0x29\4A85636008822D;
      if ((ao - (1 - an)) - t & 1)
        v = 1;
    }

    {
      int t = ac || (an = w) == 0x29\4A85636008822D;
      if ((ao - (1 - an)) - t & 1)
        v = 1;
    }

    {
      int t = ac || (an = w) == 0x29\4A85636008822D;
      if ((ao - (1 - an)) - t & 1)
        v = 1;
    }
  }

  p = v;
  printf("checksum = %X\n", p);
  return 0;
}