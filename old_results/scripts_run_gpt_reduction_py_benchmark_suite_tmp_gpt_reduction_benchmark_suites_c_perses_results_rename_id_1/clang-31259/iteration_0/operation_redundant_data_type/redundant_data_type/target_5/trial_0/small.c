#include <stdio.h>

unsigned int fn2(int p1, int p2) { return p1; }
int fn4(int p1, int p2) { return p1 % p2; }
unsigned int fn5(unsigned int p1, unsigned int p2) { return p1; }

unsigned int f;

int main() {
  int i;
  unsigned int ad[7][5][7] = {{8}, {8}, {{8}, 0x98}};

  for (i = 0; i < 7; i++)
    f = f ^ ad[i][1][0];

  printf("checksum = %u\n", f);

  return 0;
}