#include <stdio.h>

unsigned h;
short o;

int main() {
  short q = 0; // Assign the initial value of o to q

  while (q > 1)
    q -= 1;
  while (q > 1)
    q -= 1;
  while (q > 1)
    q -= 1;
  while (q > 1)
    q -= 1;
  while (q > 1)
    q -= 1;
  while (q > 1)
    q -= 1;

  h = q;
  printf("checksum = %X\n", h);

  return 0;
}