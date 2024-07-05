#include <iostream>

int fn3(int p1, int p2) {
  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1
                                                                    : p1 + p2;
}

unsigned m;
unsigned n;
signed o;

int main() {
  for (; n < 12; ) {
    int p1 = o;
    int p2 = o;
    int result = p2 == 0 ? p1 : p1 % p2;
    signed ac = 0xE3;

    if (o > ac && result)
        break;

    n = fn3(n, 3);

    // Duplicate the loop body three more times
    p1 = o;
    p2 = o;
    result = p2 == 0 ? p1 : p1 % p2;
    ac = 0xE3;

    if (o > ac && result)
        break;

    n = fn3(n, 3);

    p1 = o;
    p2 = o;
    result = p2 == 0 ? p1 : p1 % p2;
    ac = 0xE3;

    if (o > ac && result)
        break;

    n = fn3(n, 3);

    p1 = o;
    p2 = o;
    result = p2 == 0 ? p1 : p1 % p2;
    ac = 0xE3;

    if (o > ac && result)
        break;

    n = fn3(n, 3);
  }

  return m;
}