#include <stdio.h>

char fn2(int p1, int p2) {
  return p1;
}

int u;
int v3;

int main() {
  int checksum = 2;
  int temp_checksum = checksum;  // Step 2: Initialize "temp_checksum"
  
  for (; u < 51; ++u) {
    // Step 2: Replace "checksum" with "temp_checksum"
    temp_checksum = fn2(temp_checksum, 3);

    // Step 2: Update "temp_checksum" with the modified value
    temp_checksum += 0x9EE7F9D1C772505B;
  }
  
  printf("checksum = %d\n", temp_checksum);  // Step 3: Print "temp_checksum" instead of "v3"
  return 0;
}
