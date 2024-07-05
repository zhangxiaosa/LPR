#include <stdio.h>

unsigned h;
short o;

int main() {
  short q = o;
  while (q > 1)
    q -= 1;
  while (q > 1)
    q -= 1;
  while (q > 1)
    q -= 1;
  while (q > 1)
    q -= 1;
  while (q > 1)
    q -= 1;
  while (q > 1)
    q -= 1;
  h = q;

  // Inlined code to print the value of h
  char buffer[16];
  int i = 0;
  while (h > 0) {
    int remainder = h % 16;
    if (remainder < 10)
      buffer[i++] = remainder + '0';
    else
      buffer[i++] = remainder + 'A' - 10;
    h /= 16;
  }

  printf("checksum = ");
  for (int j = i - 1; j >= 0; j--)
    putchar(buffer[j]);
  putchar('\n');

  return 0;
}
