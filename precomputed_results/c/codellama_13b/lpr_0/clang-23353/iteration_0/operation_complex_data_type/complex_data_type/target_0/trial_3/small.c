
#include<stdio.h>

int main() {
  int i;
  char p1, p2;
  unsigned p3;
  
  for (p3 = 6; p3 != -7; p3--) {
    i ^= fn1(p3, i) && 1L;
  }
  return 0;
}

int fn1(char p1, char p2) {
  return p1 * p2;
}

struct g {
  int h;
};

int* fn2(unsigned p1, int* p2, char p3) {
  for (p3 = 6; p3 != -7; p3--) {
    p2 ^= fn1(p3, i) && 1L;
  }
  return p2;
}
