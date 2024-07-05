#include <stdint.h>

int f;
int g;

int main() {
  int i;
  int j = 0x24F96B7B;
  int n = g;
  int o = n;
  int p = o;
q:
  p = p >> 1;
  i = p;
  if (i) {
    j = j << p;
    goto q;
  }
}
