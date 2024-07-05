#include <stdio.h>

int v;
short w;
short ac = 1;

int main() {
  for (w = 3; w; w -= 1) {
    if (true) {
      ac || (w = 1);
      if (((short)0xBCD1 - (short)(1 - true)) - ac && true)
        v = true;
    }
  }
  printf("checksum = %d\n", v);
  return 0;
}
