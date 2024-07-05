#include <stdio.h>

signed char fn1(signed char p1, signed char p2) {
  return p1 * p2;
}

signed i;
signed j;

int main() {
  signed char p3;
  for (p3 = 6; p3 != -7; p3--)
    j ^= fn1(p3, i) && 1L;
  return 0;
}