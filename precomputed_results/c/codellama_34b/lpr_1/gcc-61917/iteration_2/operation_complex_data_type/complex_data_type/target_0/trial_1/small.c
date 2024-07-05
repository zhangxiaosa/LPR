
#include <stdio.h>

int fn2(int p1_int, int p2_int) {
  return p1_int - p2_int;
}

int main() {
  int result = fn2(10, 27);
  printf("Result: %d\n", result);
  return 0;
}
