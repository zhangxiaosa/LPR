#include <stdio.h>

unsigned int p;
int t;
unsigned int u;
long v;
short w;
short ac = 1;

char fn4(char p1, char p2) {
  return p1;
}

char fn10(unsigned int p1, short p2) {
  int al = 3;
  long am = 1;
  int an;
  for (w = 3; w; w -= 1) {
    if (an == 250) {
      p2 = ac || (an = w) == 0x294A85636008822D;
      short ao = 0xBCD1;
      if ((ao - fn4(am - an, 0xEC)) - p2 & 1)
        v = 1;
    }
  }
  return al;
}

int fn13() {
  short ae = 1;
  fn10(u, t);
  return ae;
}

int main() {
  fn13();
  p = v;
  printf("checksum = %d\n", p);
  return 0;
}