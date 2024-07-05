
<SYS>

#include <stdio.h>

int fn2(int p1_int, int p2_int) {
  return p1_int - p2_int;
}

int k = -27;
int l = 5;

int fn3(int p1_int) {
  int o;
  for (; k >= -27; k = k - 6)
    for (; l < 5; l++)
      p1_int = fn2(o, p1_int);
  return p1_int;
}

int main() {
  fn3(10);
  return 0;
}
