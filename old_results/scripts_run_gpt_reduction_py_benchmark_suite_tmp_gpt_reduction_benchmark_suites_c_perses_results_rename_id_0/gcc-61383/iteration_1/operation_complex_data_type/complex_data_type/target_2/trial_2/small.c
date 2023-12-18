#include <stdbool.h>

unsigned long fn1(long p1, long p2) {
  if (p2 == 0)
    return p1;
  else
    return p1 % p2;
}

long fn3(long p1, long p2) {
  bool condition1 = (p1 && p2 && p1 > 2147483647 - p2) || (p1 < 0 && p2 < 0 && p1);
  bool condition2 = p1 + p2;

  if (condition1)
    return p1;
  else
    return condition2;
}

unsigned long n = 0;
long o = 0;

int main() {
  while (n < 12) {
    unsigned long temp = fn1(o, o);
    if (0x4F92L < temp && temp < 6) {
      // Do something
    } else if (o <= 0xE3L) {
      // Do something else
    } else if (temp) {
      break;
    }

    n = fn3(n, 3);
  }

  return 0;
}