#include <stdio.h>

long fn1(long p1, long p2) {
  return p1 - p2;
}

long f;
unsigned g;
short a = 1;
int c = 250U;
short d = 0xBCD1;
unsigned c_modified = 1U - c;

int main() {
  for (g = 3; g; g -= 1) {
    if (fn1(d, c_modified) - a & 1)
      f = 1;
  }
  printf("checksum = %lX\n", f);
  return 0;
}