#include <stdio.h>

long v1;
int w;
int ac = 1;

char fn4(char p1, char p2) {
  return p1;
}

int fn12(int p1, int p2, int p3, int p4, int p5, long *p6) {
  int an;

  for (w = 3; w; w -= 1) {
    if (an == 250) {
      p2 = ac || (an = w);
      short ao = 0xBCD1;
      if (ao - fn4(1 - an, 0xEC) - p2 & 1) {
        v1 = 1;
      }
    }
  }

  return 3;
}

int main() {
  fn12(2, 248, 1, 1, 1, &v1);
  printf("checksum = %ld\n", v1);
  return 0;
}