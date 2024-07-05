#include <stdio.h>

char fn1(char p1, char p2) {
  return p1 * p2;
}

int main() {
  char p3;
  int i;
  signed j_h;

  char p31 = 6, p32 = 5, p33 = 4, p34 = 3, p35 = 2, p36 = 1, p37 = 0, p38 = -1, p39 = -2, p310 = -3, p311 = -4, p312 = -5, p313 = -6, p314 = -7;

  j_h ^= fn1(p31, i) && 1L;
  j_h ^= fn1(p32, i) && 1L;
  j_h ^= fn1(p33, i) && 1L;
  j_h ^= fn1(p34, i) && 1L;
  j_h ^= fn1(p35, i) && 1L;
  j_h ^= fn1(p36, i) && 1L;
  j_h ^= fn1(p37, i) && 1L;
  j_h ^= fn1(p38, i) && 1L;
  j_h ^= fn1(p39, i) && 1L;
  j_h ^= fn1(p310, i) && 1L;
  j_h ^= fn1(p311, i) && 1L;
  j_h ^= fn1(p312, i) && 1L;
  j_h ^= fn1(p313, i) && 1L;
  j_h ^= fn1(p314, i) && 1L;

  return 0;
}