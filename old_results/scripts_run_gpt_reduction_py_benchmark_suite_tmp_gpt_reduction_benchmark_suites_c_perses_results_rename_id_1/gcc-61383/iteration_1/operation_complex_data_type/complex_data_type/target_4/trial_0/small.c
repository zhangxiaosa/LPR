#include<stdio.h>

int fn3(int p1, int p2) {
  if (p1 != 0 && p2 != 0 && p1 > 2147483647 - p2)
    return p1;
  else if (p1 < 0 && p2 < 0 && p1 != 0)
    return p1;
  else
    return p1 + p2;
}

unsigned int m;
unsigned int n;
int o;

short fn5(int p1) {
  unsigned int tempN = 0;
  int ab = 0;

  for (; tempN < 12; tempN = fn3(tempN, 3)) {
    if (0x4F92L < (ab = p1 == 0 ? p1 : p1 % p1, 6))
      ;
    else if (p1 <= 0xE3L)
      ;
    else if (ab)
      break;
  }

  return tempN;
}

int main() {
  int o = 42;

  if (fn5(o) != 0)
    ;

  return 0;
}