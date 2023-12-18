#include <stdio.h>

int fn3(int p1, int p2) {
  if ((p1 != 0) && (p2 != 0) && (p1 > 2147483647 - p2))
    return p1;
  else if ((p1 < 0) && (p2 < 0))
    return p1;
  else
    return p1 + p2;
}

unsigned n;

int fn5(int p1) {
  unsigned loopCount = n;

  for (; loopCount < 12; loopCount = fn3(loopCount, 3)) {
    int temp = (p1 == 0) ? 0 : p1 % p1;

    if (0x4F92L >= 6)
      continue;
    else if (p1 > 0xE3L)
      continue;
    else
      break;
  }

  return n;
}

int main() {
  if (fn5(0))
    ;
}
