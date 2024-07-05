#include <stdio.h>

unsigned ap;

unsigned fn12() {
  if (ap == 0) {
    return 0x41AEA787;
  } else {
    return 0;
  }
}

int main() {
  unsigned f = fn12();
  printf("checksum = %X\n", f);
  return 0;
}