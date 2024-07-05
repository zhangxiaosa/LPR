#include <stdio.h>

char fn2(char p1, int p2) { return p1; }

short int fn3(short int p1, short int p2) { return p2; }

unsigned int p;
unsigned int u;
unsigned int v[1][4];

int main() {
  int i;
  int b = 0L;
  int d = 2;
  for (; u < 51; ++u) {
    unsigned int e[9];
    int i;
    for (i = 0; i < 9; i++)
      e[i] = 0x9EE7F9D1C772505BLL;
    d = fn2(v[0][3] = fn3(4, d), 3) + e[0];
  }
  i = 0;
  p = v[i][3];
  printf("checksum = %x\n", p);
  return 0;
}