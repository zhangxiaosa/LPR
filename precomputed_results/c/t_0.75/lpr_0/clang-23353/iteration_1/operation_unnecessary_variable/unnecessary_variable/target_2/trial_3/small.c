#include <stdio.h>

char fn1(char p2) { return p2; }

int i;
int j_h;

int *fn2(unsigned p1, int *p2, char p3) {
  j_h = fn1(6, i);
  return p2;
}

int main() {
  return 0;
}