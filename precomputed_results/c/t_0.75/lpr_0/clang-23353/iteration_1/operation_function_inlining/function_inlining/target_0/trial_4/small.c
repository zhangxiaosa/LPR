#include <stdio.h>

int i = 0;
signed j_h;

int *fn2(int *p2, char p3) {
  for (p3 = 6; ; p3--)
    j_h ^= p3 * i;

  return p2;
}

int main() {
  return 0;
}
