
#include <stdio.h>

int fn2(int p1, int p2) {
  return p1 - p2;
}

int main() {
  int an = 0x294A;
  int ao = 0xBCD1;

  if (fn2(ao - (1 - an), an) & 1) {
    v_int = 1;
    printf("checksum = %d\n", v_int);
  }
  return 0;
}
