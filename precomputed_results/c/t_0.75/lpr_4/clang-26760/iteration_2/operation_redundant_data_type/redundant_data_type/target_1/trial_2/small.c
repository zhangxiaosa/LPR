#include <stdint.h>

unsigned int g;
int main() {
  int j = 1609057035;
  unsigned int k;
  j--;
q:
  k = k >> 1;
  if (j) {
    k = k << j;
    goto q;
  }
}