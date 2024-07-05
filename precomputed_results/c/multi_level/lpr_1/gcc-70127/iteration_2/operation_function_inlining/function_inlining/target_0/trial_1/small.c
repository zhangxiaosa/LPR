#include <stdio.h>
#include <stdlib.h>

unsigned u;

typedef struct {
  int ab;
  signed q : 22;
} p;

p v[1];
p w = {0x12345678, 999};

int main() {
  p a = {8L, 666};

  for (; u <= 1; u += 1) {
    a = v[0] = w;
    v[0] = a;
  }

  unsigned checksum = v[0].q;
  unsigned checksum_hex_digits = 8;
  char checksum_hex_string[checksum_hex_digits + 1];
  sprintf(checksum_hex_string, "%0*X", checksum_hex_digits, checksum);
  puts("checksum =");
  puts(checksum_hex_string);

  return 0;
}
