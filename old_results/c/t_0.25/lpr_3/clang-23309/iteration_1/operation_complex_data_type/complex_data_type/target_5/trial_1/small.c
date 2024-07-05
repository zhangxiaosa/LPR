#include <stdio.h>

short ac = 1;
unsigned p;
int t;
unsigned u;
long v;
short ab;

char fn4(char p1, char p2) { return p1; }

unsigned fn5(unsigned p1, unsigned p2) { return p2; }

short fn10(unsigned p1, short p2) {
  int af = 0x2F2F6D26;
  int an;
  short w;
  for (w = 3; w; w -= 1) {
    if (an = 250) {
      p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822D;
      if ((0xBCD1 - fn4(1 - an, 0xEC)) - p2 & 1)
        v = 1;
    }
  }
  return af;
}

int fn13() {
  fn10(u, t);
  return 1;
}

int main() {
  fn13();
  p = v;
  printf("checksum = %X\n", p);
  return 0;
}