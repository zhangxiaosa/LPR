#include <stdio.h>

char fn2(int p1) {
  return p1;
}

int v3;

int main() {
  int checksum = 2;
  for (; ; ++u) {
    v3 = checksum;
    checksum = fn2(checksum);
    checksum += 0x9EE7F9D1C772505B;
  }
  printf("checksum = %d\n", v3);
  return 0;
}
