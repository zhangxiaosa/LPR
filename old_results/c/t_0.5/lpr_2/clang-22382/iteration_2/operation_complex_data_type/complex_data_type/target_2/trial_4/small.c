#include <stdio.h>

int fn1(int);

unsigned int fn2() {
  int p;
  fn1(p);
  for (;;) {
    int r;
    p = r = p;
  }
}

int fn1(int p5) {
  int p5_i = p5;
w:
  goto w;
}

int main() {
  return 0;
}