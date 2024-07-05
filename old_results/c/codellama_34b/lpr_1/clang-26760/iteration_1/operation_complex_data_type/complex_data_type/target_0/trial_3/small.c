
#include <stdio.h>

int g;
int main() {
  int i, j, k, n;

  i = 0;
  j = 0x24F96B7BL;
  k = 0;
  n = g;

  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      k = k + (i * j);
    }
  }

  printf("The result is: %d\n", k);

  return 0;
}
