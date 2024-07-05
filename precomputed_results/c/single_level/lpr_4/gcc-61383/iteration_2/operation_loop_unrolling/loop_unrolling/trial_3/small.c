#include <iostream>

int m;
unsigned n;
int o;
static unsigned p = 0x01B28DB7L;

int fn1(int p1, int p2) { return p2 == 0 ? p1 : p1 % p2; }

short fn2(short p1, int p2) { return p1; }

int fn3(int p1, int p2) {
  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1 : p1 + p2;
}

int main() {
  int ab;
  int p1 = o;
  if (0x4F92L < fn2(p | (ab = fn1(p1, p1)), 6))
    ;
  else {
    int ac = 0xE3L;
    if (p1 <= ac)
      ;
    else if (ab)
      break;
  }

  int ab_1;
  int p1_1 = o;
  if (0x4F92L < fn2(p | (ab_1 = fn1(p1_1, p1_1)), 6))
    ;
  else {
    int ac_1 = 0xE3L;
    if (p1_1 <= ac_1)
      ;
    else if (ab_1)
      break;
  }

  int ab_2;
  int p1_2 = o;
  if (0x4F92L < fn2(p | (ab_2 = fn1(p1_2, p1_2)), 6))
    ;
  else {
    int ac_2 = 0xE3L;
    if (p1_2 <= ac_2)
      ;
    else if (ab_2)
      break;
  }

  int ab_3;
  int p1_3 = o;
  if (0x4F92L < fn2(p | (ab_3 = fn1(p1_3, p1_3)), 6))
    ;
  else {
    int ac_3 = 0xE3L;
    if (p1_3 <= ac_3)
      ;
    else if (ab_3)
      break;
  }

  return m;
}