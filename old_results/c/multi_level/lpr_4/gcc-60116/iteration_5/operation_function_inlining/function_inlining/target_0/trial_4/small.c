#include <stdio.h>

int w = 0xDC6F3D13L;
long long ag[4];

int fn12() {
  int ah;
  ah = 0;
  ag[3] = w && 0x57;
  return 0;
}

int main() {
  fn12();
  printf("checksum = %d\n", ag[3]);
  return 0;
}
