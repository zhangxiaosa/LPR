#include <stdio.h>

signed int l;
unsigned int n1;
signed int o;

signed int fn1(signed int p1, signed int p2) {
  signed int result = p2 == 0 ? p1 : p1 % p2;
  return result;
}

int fn3(int p1, int p2) {
  int result = (p1 && p2 && p1 > 2147483647 - p2) || (p1 < 0 && p2 < 0 && p1) ? p1 : p1 + p2;
  return result;
}

short fn6(unsigned int n1) {
  short result = l;
  while (n1 < 12) {
    int ab;
    signed int abResult = fn1(o, o);
    if (0x4F92L < abResult) {
      // Do nothing
    } else {
      signed int ac = 0xE3L;
      if (o > ac) {
        // Do nothing
      } else if (abResult) {
        break;
      }
    }
    n1 = fn3(n1, 3);
  }
  return result;
}

int main() {
  fn6(n1);
  return 0;
}