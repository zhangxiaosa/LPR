#include <stdio.h>

int fn3(int p1, int p2) {
  int expr1 = p1 && p2 && p1 > 2147483647 - p2;
  int expr2 = p1 < 0 && p2 < 0 && p1;
  int result = expr1 ? p1 : p1 + p2;
  return result;
}

unsigned int n;
int o;

short fn6() {
  for (; n < 12; n = fn3(n, 3)) {
    int ab;
    int expr3 = o == 0 ? o : o % o;
    int condition1 = 0x4F92L < (ab = expr3, 6);
    if (condition1)
      ;
    else if (o <= 0xE3L)
      ;
    else if (ab)
      break;
  }
  return 0;
}

int main() {
  fn6();
}