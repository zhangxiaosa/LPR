#include <stdio.h>

char fn2(char p1) { return p1; }

unsigned u;

int main() {
  int d = 2;
  unsigned e = 0x9EE7F9D1C772505BLL;
  for (; u < 51; ++u)
    d = fn2(d) + 0x9EE7F9D1C772505BLL;
  printf("checksum = %x\n", d);
  return 0;
}