#include<stdio.h>

int u;
short v0_3;

inline char fn2(char p1) {
  return p1;
}

inline void fn11() {
  short d_ = 2;
  for (; u < 51; ++u) {
    v0_3 = d_;
    d_ = v0_3 + 0x9EE7F9D1C772505B;
  }
}

int main() {
  fn11();
  return 0;
}
