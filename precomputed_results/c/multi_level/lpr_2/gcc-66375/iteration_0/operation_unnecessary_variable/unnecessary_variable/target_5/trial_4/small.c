#include <stdio.h>

typedef char a;
typedef int d;
typedef unsigned g;

a fn2() { return; }


g u;
g v[4];

int main() {
  d d = 0x9EE7F9D1C772505BLL;
  for (; u < 51; ++u) {
    v[3] = d;
    d = fn2() + 0x9EE7F9D1C772505BLL;
  }
  printf("checksum = %X\n", v[3]);
  return 0;
}