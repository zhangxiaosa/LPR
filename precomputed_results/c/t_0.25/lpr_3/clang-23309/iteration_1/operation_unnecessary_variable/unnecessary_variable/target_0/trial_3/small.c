#include <stdio.h>

int ac = 1;
int t;
unsigned u;
long v;
short ab;

char fn4(char p1, char p2) {
  return p1;
}

unsigned fn5(unsigned p1, unsigned p2) {
  return p2;
}

int fn10(unsigned p1, short p2) {
  int af = 0x2F2F6D26;
  short w;
  if (250) {
    p2 = fn5(ab, ac);
    short ao = 0xBCD1;
    if ((ao - fn4(1 - 250, 0xEC)) - p2 & 1)
      v = af;
  }
  return af;
}

int main() {
  fn10(u, t);
  printf("optimized v = %lu\n", v);
  return 0;
}
