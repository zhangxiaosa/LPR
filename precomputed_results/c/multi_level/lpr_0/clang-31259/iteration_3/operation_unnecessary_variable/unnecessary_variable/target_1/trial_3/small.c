#include <stdio.h>

unsigned int w;
int af;

#define UNROLL_FACTOR 4

int fn4(int _) { return _; }

int main() {
  w = 1;

  for (; af;) {
  }

  for (; af >= UNROLL_FACTOR - 1; af -= UNROLL_FACTOR) {
    fn4(4294967295);
    fn4(4294967295);
    fn4(4294967295);
    fn4(4294967295);
  }

  for (; af >= 0; af -= 1) {
    fn4(4294967295);
  }

  printf("checksum = %X\n", 0);
  return 0;
}