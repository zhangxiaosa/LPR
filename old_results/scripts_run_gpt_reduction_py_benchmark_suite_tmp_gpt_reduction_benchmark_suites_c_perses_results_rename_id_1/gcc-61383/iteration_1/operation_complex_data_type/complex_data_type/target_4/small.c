#include <stdio.h>

int fn3(int p1, int p2) {
  if (p1 != 0 && p2 != 0 && p1 > 2147483647 - p2)
    return p1;
  else if (p1 < 0 && p2 < 0 && p1 != 0)
    return p1;
  else
    return p1 + p2;
}

unsigned m;
unsigned n;
int o;
short fn5(int p1) {
  unsigned loopCount = n; // Decomposed n into loopCount of type unsigned
  for (; loopCount < 12; loopCount = fn3(loopCount, 3)) {
    int ab;
    int temp = p1 == 0 ? p1 : p1 % p1;
    if (0x4F92L < (ab = temp, 6)) // Decomposed ab assignment expression
      ;
    else if (p1 <= 0xE3L)
      ;
    else if (ab)
      break;
  }
  return m;
}

int main() {
  if (fn5(o))
    ;
}