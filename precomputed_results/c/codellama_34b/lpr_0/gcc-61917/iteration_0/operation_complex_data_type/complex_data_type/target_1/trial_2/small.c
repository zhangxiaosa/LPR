
#include <stdio.h>

int k;
int l;
volatile int m[5][8];

int fn3(int* p1) {
  for (;;) {
    *p1 = 0;
  }
}

int main() {
  int x = 0;
  int* p1 = &x;
  fn3(p1);
  return 0;
}
