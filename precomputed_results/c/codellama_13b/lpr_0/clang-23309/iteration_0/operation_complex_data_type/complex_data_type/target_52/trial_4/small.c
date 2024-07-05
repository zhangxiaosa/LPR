
#include <stdio.h>

int main() {
  unsigned char p = 0;
  int ap = 0;
  unsigned char ao;
  unsigned long an;
  unsigned long am = 1L;
  unsigned long an = 250UL;
  unsigned long ao = 0xBCD1L;

  for (int w = 3; w; w -= 1) {
    an = w;
    ao = fn6(am, an) & 1UL;
    if (ao)
      p = 1;
  }

  fn9(p, "g_170", ap);
  printf("checksum = %X\n", p);
  return 0;
}
