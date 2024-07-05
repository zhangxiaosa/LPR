#include <stdio.h>

typedef int c;
typedef unsigned d;

d h = 0xCA;
short i;
int j[5][5];
unsigned k = 0xAF7C65D6L;
d l;
unsigned m[9][2][3];
c n;

unsigned fn1(signed p1, int p3, signed p4);

unsigned fn1(signed p1, int p3, signed p4) {
  p1; // Removed the condition p1 || (m[1][0][1] = p1);
  return 2;
}

int main() {
  fn1(0, 7, 0);
  return n;
}