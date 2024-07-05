#include <stdio.h>

int v;
int w;

int fn4(int p1, int p2) {
  return p1;
}

int fn11(int p1, int p2, int p3) {
  int an = 0;
  for (w = 3; w != 0; w -= 1) {
    if (an == 250) {
      p3 = p2 || (an == w);
      int ao = 0xBCD1;
      if (ao - fn4(1 - an, 0xEC) - p3 & 1)
        v = 1;
    }
  }
  return v;
}

int main() {
  int ag = 248;
  v = fn11(2, ag, 0);
  printf("checksum = %hx\n", v);
  return 0;
}