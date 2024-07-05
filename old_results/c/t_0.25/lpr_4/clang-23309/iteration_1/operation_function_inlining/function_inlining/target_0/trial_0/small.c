#include <stdio.h>

char fn4(char p1, char p2) {
  return p1;
}

short u;
int t;
long v;

int fn10(unsigned p1, short p2) {
  for (short w = 3; w; w -= 1) {
    if (250) {
      if ((0xBCD1 - (1 - w)) - 1 & 1)
        v = 1;
    }
  }
  return 0;
}

int main() {
  fn10(u, t);
  printf("checksum = %X\n", v);
  return 0;
}