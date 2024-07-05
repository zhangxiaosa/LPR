#include<stdio.h>

unsigned h;
short o;

int main() {
  short q = o;
  int s = 1L;

  q -= 6;  // Unroll the loop six times

  h = q;
  printf("checksum = %X\n", h);
  return 0;
}