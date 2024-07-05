#include <stdio.h>

signed int l;
unsigned int n;
signed int o;

signed int fn1(signed int p1, signed int p2) { 
  return p2 == 0 ? p1 : p1 % p2; 
}

int fn3(int p1, int p2) {
  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1 : p1 + p2;
}

short fn6() {
  for (; n < 12; n = fn3(n, 3)) {
    int ab;
    signed int ac = 0xE3L;
    ab = fn1(o, o);
    
    if (0x4F92L < ab && 6) {
      ;
    } else {
      if (o <= ac) {
        ;
      } else if (ab) {
        break;
      }
    }
  }
  
  return l;
}

int main() { 
  fn6();
}