#include<stdio.h>

int h;
short o;

int main() {
  short q = (short)o;
  while (q > 1L)
    q -= 1;
  while (q > 1L)
    q -= 1;
  while (q > 1L)
    q -= 1;
  while (q > 1L)
    q -= 1;
  while (q > 1L)
    q -= 1;
  while (q > 1L)
    q -= 1;
  h = (int)q;
  printf("checksum = %X\n", h);
  return 0;
}