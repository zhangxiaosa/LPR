#include <stdio.h>

typedef short a;
typedef int b;
typedef long c;
typedef unsigned char d;
typedef short e;
typedef unsigned f;
typedef unsigned g;

b fn2(b p1, b p2) {
  return p1 - p2;
}

c fn3(c p1, c p2) {
  return p1 - p2;
}

d fn4(d p1, d p2) {
  return p1;
}

f p;

void fn7(g p1) {
  p = p1;
}

void fn9(g p1, char *p2, int p3) {
  fn7(p1);
}

b fn13() {
  return 1UL;
}

int main() {
  fn13();
  fn9(v, "g_170", 0);
  printf("checksum = %X\n", p);
  return 0;
}