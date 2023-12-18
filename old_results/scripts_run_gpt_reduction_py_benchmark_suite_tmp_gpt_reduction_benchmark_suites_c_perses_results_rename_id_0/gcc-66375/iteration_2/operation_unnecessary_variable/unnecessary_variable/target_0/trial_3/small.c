#include <stdio.h>

char fn2(char p1) {
  return p1;
}

int u;
int main() {
  int checksum = 2;

  for (; u < 51; ++u) {
    checksum = fn2(checksum);
  }

  printf("checksum = %d\n", checksum);
  return 0;
}
