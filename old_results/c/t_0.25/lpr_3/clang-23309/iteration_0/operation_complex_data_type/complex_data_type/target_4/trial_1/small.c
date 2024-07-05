#include <stdio.h>

short ac = 1;
unsigned int p;
int t;
unsigned int u;
long v;
short ab;

char fn4(char p1, char p2) {
  return p1;
}

unsigned int fn5(unsigned int p1, unsigned int p2) {
  return p2;
}

short fn10(unsigned int p1, short p2) {
  int af = 0x2F2F6D26;
  long am = 1;
  int an;
  short ao = 0xBCD1;

  for (int w = 3; w; w -= 1) {
    if ((an = 250)) {
      p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822D;
      if ((ao - fn4(am - an, 0xEC)) - p2 & 1)
        v = 1;
    }
  }

  return af;
}

int fn13() {
  short ae = 1;
  fn10(u, t);
  return ae;
}

int main() {
  fn13();
  p = v;
  printf("checksum = %X\n", p);
  return 0;
}