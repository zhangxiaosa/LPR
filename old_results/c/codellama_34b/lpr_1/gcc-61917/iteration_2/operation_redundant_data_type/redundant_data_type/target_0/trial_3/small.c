
#include <stdio.h>

int main() {
  int x = 10;
  int y = 20;
  int result = 0;
  for (int k = 0; k >= -27; k = k - 6) {
    for (int l = 0; l < 5; l++) {
      result = x - k;
    }
  }
  printf("The result of fn3(10) is %d\n", result);
  return 0;
}
