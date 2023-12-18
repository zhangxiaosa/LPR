#include <stdio.h>

int fn3(int p1, int p2) {
  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1 : p1 + p2;
}

unsigned int n;
int o;
short fn6() {
  for (; n < 12; n = fn3(n, 3)) {
    int ab;
    int temp1 = o == 0 ? o : o % o;
    int temp2 = 6;
    if (0x4F92L < (ab = temp1, temp2))
      ;
    else if (o <= 0xE3L)
      ;
    else if (ab)
      break;
  }
  return 0;
}

int main() { fn6(); }
