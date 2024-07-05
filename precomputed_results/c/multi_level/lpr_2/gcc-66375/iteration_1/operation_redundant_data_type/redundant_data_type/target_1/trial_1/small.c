#include <stdio.h>

typedef unsigned g;

char fn2(char p1, int p2) { return p1; }

g u;
g v[4];

int main() {
  int d = 2L;
  for (; u < 51; ++u) {
    v[3] = d;
    d = fn2(v[3], 3) + 0x9EE7F9D1C772505BLL;
  }
  printf("checksum = %X\n", v[3]);
  return 0;
}