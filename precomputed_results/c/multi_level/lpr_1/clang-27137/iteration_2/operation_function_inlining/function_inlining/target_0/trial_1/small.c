#include <stdio.h>

int main() {
  short r = 0;
  for (int i = 0; i < 10; i++) {
    while (r > 1L) {
      r -= 1;
    }
  }
  return 0;
}