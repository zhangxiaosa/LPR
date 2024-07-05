#include <iostream>

int fn1(int p1, int p2) { return p2 == 0 ? p1 : p1 % p2; }
int fn2(short p1) { return p1; }
int fn3(int p1, int p2) {
  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1 : p1 + p2;
}

unsigned n;
int o;

int main() {
  int ab;

  // Iteration 1
  n = fn3(n, 3);
  if (0x4F92L < fn2(0x01B28DB7L | (ab = fn1(o, o))))
    ;
  else if (ab)
    break;

  // Iteration 2
  n = fn3(n, 3);
  if (0x4F92L < fn2(0x01B28DB7L | (ab = fn1(o, o))))
    ;
  else if (ab)
    break;

  // Iterations 3 - 10 (unrolled)
  n = fn3(n, 3);
  if (0x4F92L < fn2(0x01B28DB7L | (ab = fn1(o, o))))
    ;
  else if (ab)
    break;

  // Iteration 11
  n = fn3(n, 3);
  if (0x4F92L < fn2(0x01B28DB7L | (ab = fn1(o, o))))
    ;
  else if (ab)
    break;

  // Iteration 12
  n = fn3(n, 3);
  if (0x4F92L < fn2(0x01B28DB7L | (ab = fn1(o, o))))
    ;
  else if (ab)
    break;

  return 0;
}