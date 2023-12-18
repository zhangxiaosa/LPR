#include <stdio.h>

signed fn1(signed p1, signed p2) { return p2 == 0 ? p1 : p1 % p2; }

int fn3(int p1, int p2) {
  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1
                                                                    : p1 + p2;
}

unsigned f;
unsigned n; // Replaced d with unsigned
signed o;

short fn6() {
  for (; n < 12; n = fn3(n, 3)) {
    short temp;
    if (0x4F92L < (temp = fn1(o, o), 6)) {
    } else {
      signed temp2 = 0xE3L;
      if (o <= temp2) {
      } else if (temp)
        break;
    }
  }
  return f;
}

int main() { fn6(); }
