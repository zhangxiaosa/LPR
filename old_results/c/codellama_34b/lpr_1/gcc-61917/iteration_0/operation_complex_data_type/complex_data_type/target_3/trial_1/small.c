
#include <stdio.h>

int fn2(int p1, int p2) {
  return p1 - p2;
}

int k;
int l;
volatile int m[5][8];

int fn3(p1) {
  int o;
  for (;;) {
    for (; l; l++)
      for (k = 0; k >= -27; k = k - 6)
        p1 = fn2(o, p1);
    p1 || m[2][5];
  }
}

int main() {
  int p1;
  int result;

  p1 = 10;
  result = fn3(p1);

  printf("%d\n", result);

  return 0;
}
