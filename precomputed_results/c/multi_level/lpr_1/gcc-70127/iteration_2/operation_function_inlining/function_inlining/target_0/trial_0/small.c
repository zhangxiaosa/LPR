#include <stdio.h>

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
  unsigned formatSpecifier = checksum;

  // Replace the printf function call with its body
  {
    static const char msg[] = "checksum = %X\n";
    for (unsigned i = 0; msg[i] != '\0'; i++) {
      if (msg[i] == '%' && msg[i + 1] == 'X') {
        putchar(formatSpecifier & 0xF000000 ? (formatSpecifier & 0xF000000) >> 24 : 0x30);
        putchar(formatSpecifier & 0xFF0000 ? (formatSpecifier & 0xFF0000) >> 16 : 0x30);
        putchar(formatSpecifier & 0xFF00 ? (formatSpecifier & 0xFF00) >> 8 : 0x30);
        putchar(formatSpecifier & 0xFF);
        i++;  // Skip the format specifier '%X'
      } else {
        putchar(msg[i]);
      }
    }
  }

  return 0;
}