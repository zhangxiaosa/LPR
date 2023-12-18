#include <stdio.h>

char fn2(char p1, int p2) { return p1; }
unsigned u;
unsigned v[4];

int main() {
  for (; u < 51; ++u) {
    v[3] = 2L;
    v[3] = fn2(v[3], 3) + 0x9EE7F9D1C772505BLL;
  }
  printf("checksum = %llX\n", v[3]);
  return 0;
}