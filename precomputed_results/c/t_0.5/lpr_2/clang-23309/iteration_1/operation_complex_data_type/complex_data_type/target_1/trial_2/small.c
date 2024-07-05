#include <stdio.h>

char fn4(unsigned p1, unsigned p2) {
  return p1;
}

unsigned fn6(unsigned p1, unsigned p2) {
  return p1 - p2;
}

unsigned v;
int w;
int ac = 1;
int fn13() {
  int an;
  for (w = 3; w; w -= 1) {
    if (an = 250) {
      ac || (an = w);
      int ao = 0xBCD1;
      if (ao - fn4(fn6(1, an), 0xEC) - ac & 1)
        v = 1;
    }
  }
  return 3;
}

int main() {
  fn13();
  printf("checksum = %X\n", v);
  return 0;
}