#include <stdio.h>

char h;
short o;

int main() {
  while (o > 1)
    o -= 1;
  while (o > 1)
    o -= 1;
  while (o > 1)
    o -= 1;
  while (o > 1)
    o -= 1;
  while (o > 1)
    o -= 1;
  while (o > 1)
    o -= 1;
  h = o;
  printf("checksum = %X\n", h);
  return 0;
}