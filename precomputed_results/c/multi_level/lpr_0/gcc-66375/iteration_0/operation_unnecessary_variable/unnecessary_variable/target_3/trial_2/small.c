#include <stdio.h>

char fn2(int p1, int p2) {
  return p1;
}

short fn3(short p1, short p2) {
  return p2;
}

int main() {
  int u;
  int checksum = 2;

  // Removed unnecessary array declaration: int e[9];

  int v3 = fn3(4, checksum);
  checksum = fn2(checksum, 3);
  checksum = checksum + 0x9EE7F9D1C772505B;

  printf("checksum = %d\n", v3); // Print the constant value of v3

  return 0;
}
