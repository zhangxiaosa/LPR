#include <stdint.h>

int f;
int g;

int main() {
  int i;
  int j = 0x24F96B7B;
  unsigned int k;

  unsigned int l = 1;
  unsigned int m = j;
  unsigned int n = g;
  unsigned int o = n;
  unsigned int p = o;

  q:
  while (i) {
    k = k << m;
    goto q;
  }
}