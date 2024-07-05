#include <stdio.h>

char fn2(char p1, int p2) {
  return p1;
}

unsigned int u = 0;
unsigned int v[4] = {0};
int d = 2;

int main() {
  for (; u < 51; ++u) {
    v[3] = d;
    d = fn2(v[3], 3) + 0x9EE7F9D1C772505BLL;
  }

  printf("checksum = %X\n", v[3]);
  return 0;
}