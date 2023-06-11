#include <stdio.h>

int add(int a, int b) {
  return a + b;
}

int main() {
  int res = 0;
  res = add(1,2);
  printf("%d", res);
  return 0;
}
