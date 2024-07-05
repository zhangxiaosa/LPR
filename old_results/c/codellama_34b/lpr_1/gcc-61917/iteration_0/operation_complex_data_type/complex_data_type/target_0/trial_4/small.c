
#include <stdio.h>

// Optimized program
int fn2(int p1, int p2) {
  return p1 - p2;
}

int k;
int l;
volatile int m[5][8];

int fn3(p1) {
  int o;
  for (;;) {
    for (; l; l += 6) {
      p1 = fn2(o, p1);
      o = p1;
    }
    m[2][5] = p1;
  }
}

int main() {
  int p1 = 0;
  int p2 = 0;
  int o = 0;
  int k = 0;
  int l = 0;
  int m[5][8] = {{0}};

  p1 = fn2(p1, p2);
  o = p1;
  k = -27;
  l = 0;
  m[2][5] = p1;

  fn3(p1);

  return 0;
}
