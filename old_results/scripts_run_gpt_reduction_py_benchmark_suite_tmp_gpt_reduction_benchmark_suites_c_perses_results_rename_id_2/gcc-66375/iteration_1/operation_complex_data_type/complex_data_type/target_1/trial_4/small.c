#include <stdio.h>

char fn2(char p1, int p2) {
  return p1;
}

unsigned int u_opt;
unsigned int v0, v1, v2, v3;

int main() {
  int d = 2L;

  for (; u_opt < 51; ++u_opt) {
    v3 = d;
    d = fn2(v3, 3) + 0x9EE7F9D1C772505BLL;
  }

  printf("checksum = %X\n", v3);
  return 0;
}