
<</SYS>>

Given the following program and the variable in complex data type, decompose the it into variables with primary data type.. The program is 
long fn3(long p1, long p2) { return p1 - p2; }
unsigned fn6(unsigned p1, unsigned p2) { return p2 - p1; }
unsigned p;
unsigned v;
short w = 3;
short fn12(int p1, int p2, long p3, short p4) {
  int an;
  while (w) {
    an = 250L;
    if (p2 || (an = w)) {
      short ao = 48873;
      if (fn3(ao, fn6(1L, an)) - p2 & 1L)
        v = 1L;
    }
    w--;
  }
  return 0;
}

int main() {
  fn12(7L, 7L, 248L, 0);
  p = v;
  printf("checksum = %X\n", p);
  return 0;
}

// Decomposition

#include <stdio.h>

int main() {
  int p1 = 7L;
  int p2 = 7L;
  int p3 = 248L;
  int p4 = 0;
  int w = 3;
  int an;
  int ao = 48873;
  int v;
  int fn3_p1 = ao;
  int fn3_p2 = fn6(1L, an);
  int fn3_return = fn3(fn3_p1, fn3_p2);
  int fn6_p1 = 1L;
  int fn6_p2 = an;
  int fn6_return = fn6(fn6_p1, fn6_p2);

  while (w) {
    an = 250L;
    if (p2 || (an = w)) {
      if (fn3_return - p2 & 1L)
        v = 1L;
    }
    w--;
  }

  p = v;
  printf("checksum = %X\n", p);
  return 0;
}

// Optimization

#include <stdio.h>

int main() {
  int p1 = 7L;
  int p2 = 7L;
  int p3 = 248L;
  int p4 = 0;
  int w = 3;
  int an;
  int ao = 48873;
  int v;

  while (w) {
    an = 250L;
    if (p2 || (an = w)) {
      if ((ao - fn6(1L, an)) - p2 & 1L)
        v = 1L;
    }
    w--;
  }

  p = v;
  printf("checksum = %X\n", p);
  return 0;
}
