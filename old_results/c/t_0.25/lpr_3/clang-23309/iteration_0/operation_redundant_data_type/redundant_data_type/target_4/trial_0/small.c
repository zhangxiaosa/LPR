#include <stdio.h>

short w;
short ac = 1;

char fn4(short p1, short p2) { return p1; }
unsigned fn5(unsigned p1, unsigned p2) { return p2; }

unsigned p;
int t;
unsigned u;
long v;
short ab;

short fn10(unsigned p1, short p2) {
  int af = 0x2F2F6D26;
  long am = 1;
  int an;
  for (w = 3; w; w -= 1) {
    if (an = 250) {
      p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822D;
      short ao = 0xBCD1;
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
  printf("checksum = %hx\n", p);
  return 0;
}