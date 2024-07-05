#include <stdio.h>

char fn1(char p1, char p2) {
  return p1 * p2;
}

signed i;
signed j;

int main() {
  signed p3;

  j ^= 6 * i && 1L;
  j ^= 5 * i && 1L;
  j ^= 4 * i && 1L;
  j ^= 3 * i && 1L;
  j ^= 2 * i && 1L;
  j ^= 1 * i && 1L;
  j ^= 0 * i && 1L;
  j ^= -1 * i && 1L;
  j ^= -2 * i && 1L;
  j ^= -3 * i && 1L;
  j ^= -4 * i && 1L;
  j ^= -5 * i && 1L;
  j ^= -6 * i && 1L;
  j ^= -7 * i && 1L;

  return 0;
}