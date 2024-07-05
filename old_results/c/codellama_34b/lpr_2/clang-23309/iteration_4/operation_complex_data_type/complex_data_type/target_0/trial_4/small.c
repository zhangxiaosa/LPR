
#include <stdio.h>

int fn2(int p1, int p2) {
  return p1 - p2;
}

int main() {
  int ac = 1;
  int an = 0x294A;
  int w = 0;
  int t = ac || (an = w);
  int ao = 0xBCD1;
  if (fn2(ao - (1 - an), t) & 1) {
    int v_int = 1;
    printf("checksum = %d\n", v_int);
  }
  return 0;
}
