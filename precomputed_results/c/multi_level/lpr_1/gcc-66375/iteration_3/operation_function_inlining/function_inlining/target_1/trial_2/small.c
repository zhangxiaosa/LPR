#include <stdio.h>

int u;
short v0_3;

int main() {
  int d_ = 2;
  for (; u < 51; ++u) {
    v0_3 = d_;
    d_ = (char)v0_3 + 0x9EE7F9D1C772505B;
  }

  char checksum_buffer[9];
  char* checksum_ptr = checksum_buffer;
  unsigned int checksum_value = v0_3;

  while (checksum_value != 0) {
    *checksum_ptr++ = "0123456789ABCDEF"[checksum_value & 0xF];
    checksum_value >>= 4;
  }

  *checksum_ptr = '\0';

  char checksum_output[14] = "checksum = ";
  strcat(checksum_output, checksum_buffer);
  puts(checksum_output);

  return 0;
}