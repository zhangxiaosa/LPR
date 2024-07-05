
#include <stdio.h>

int main() {
  int a = 0;
  int b = 1;
  int c = 2;
  int d = 3;
  int e = 4;
  int f = 5;
  int g = 6;

  // print the checksum
  printf("checksum = %X\n", a - b);

  // subtract values
  int h = c - d;
  int i = e - f;

  // print values
  printf("c = %d\n", c);
  printf("d = %d\n", d);
  printf("e = %d\n", e);
  printf("f = %d\n", f);

  // compare values
  int j = g - a;
  int k = h - i;

  // print the result of the comparison
  printf("g = %d\n", g);
  printf("h = %d\n", h);
  printf("i = %d\n", i);
  printf("j = %d\n", j);
  printf("k = %d\n", k);

  return 0;
}
