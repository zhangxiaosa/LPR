#include <stdio.h>

short o;

int main() {
  short q;
  q = o;
  int s = 1L;
  while (q > s)
    q -= 1;
  while (q > s)
    q -= 1;
  while (q > s)
    q -= 1;
  while (q > s)
    q -= 1;
  while (q > s)
    q -= 1;
  while (q > s)
    q -= 1;
  int t = 0;
  printf("checksum = %X\n", q);
  return 0;
}