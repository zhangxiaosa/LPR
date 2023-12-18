#include <stdio.h>

int fn1(int p1, int p2) { return p2 == 0 ? p1 : p1 % p2; }

unsigned m;
int o;
int q;

short fn5(int p1) {
  int ab;
  if (0x4F92L < (ab = fn1(p1, p1), 6))
    ;
  else {
    signed ac = 0xE3L;
    if (p1 <= ac)
      ;
    else if (ab)
      return m;
  }
  return m;
}

short fn6() {
  if (fn5(o))
    ;
  return q;
}

int main() {
  fn6();
}
