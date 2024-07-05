
#include <stdio.h>

#define CHECKSUM_MASK 0xFF
#define CHECKSUM_INIT 0x294A85636008822DLL
#define CHECKSUM_DIV 1

void checksum(unsigned char *data, int length) {
  unsigned char checksum = 0;
  for (int i = 0; i < length; i++) {
    checksum += data[i];
    if (checksum >= CHECKSUM_MASK) {
      checksum -= CHECKSUM_MASK;
    }
  }
  printf("checksum = %X\n", checksum);
}

int main() {
  unsigned char data[3] = {0};
  checksum(data, 3);
  return 0;
}
