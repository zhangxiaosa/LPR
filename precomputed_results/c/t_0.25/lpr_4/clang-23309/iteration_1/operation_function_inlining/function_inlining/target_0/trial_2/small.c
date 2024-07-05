#include <stdio.h>

char fn4(char p1, char p2) {
  return p1;
}

short u;
int t;
long v;

int fn10() {
  for (short w = 3; w; w -= 1) {
    if ((250 - 1 + w) - 1 & 1) {
      v = 1;
    }
  }
  return 0;
}

int main() {
  fn10();
  printf("checksum = %X\n", v);
  return 0;
}