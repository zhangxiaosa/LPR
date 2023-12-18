#include <stdio.h>

unsigned u_opt;
unsigned v3;

char fn2(char p1, int p2) {
  return p1;
}

int main() {
  int d = 2L;
  for (; u_opt < 51; ++u_opt) {
    v3 = d;
    d = v3 + 0x9EE7F9D1C772505BLL;
  }
  printf("checksum = %X\n", v3);
  return 0;
}