#include <stdio.h>

short fn3(short p1, short p2) { return p2; }

int u;
int v3;

int main() {
  int checksum = 2;
  for (; u < 51; ++u) {
    v3 = fn3(4, checksum);
    checksum = checksum;
  }
  printf("checksum = %d\n", v3);
  return 0;
}
