#include <stdio.h>

int fn3(int p1, int p2) {
  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1 : p1 + p2;
}

unsigned m;
unsigned n;
int o;

int main() {
  if ((o && 3 && o > 2147483647 - 3) || (o < 0 && 3 < 0 && o) ? o : o + 3)
  {
    for (; n < 12; n = (o && 3 && o > 2147483647 - 3) || (o < 0 && 3 < 0 && o) ? o : o + 3) {
      int ab;

      if(0x4F92L < (ab = o == 0 ? o : o % o, 6))
        continue;
      else if (o <= 0xE3L)
        continue;
      else if (ab)
        break;
    }
  }
}