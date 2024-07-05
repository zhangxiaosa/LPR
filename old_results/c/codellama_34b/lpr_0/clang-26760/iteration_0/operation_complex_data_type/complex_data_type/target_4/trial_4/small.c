
#include <stdio.h>

typedef unsigned int c;
typedef unsigned int d;
typedef unsigned int e;
d f;
int g;
int main() {
  int i;
  c j = 0x24F96B7BL;
  e k;
  for (f = 0; j != 0; --j) {
    k = (unsigned int)k >> 1;
    i = f;
    k = i ? k << j : 0;
  }
}
