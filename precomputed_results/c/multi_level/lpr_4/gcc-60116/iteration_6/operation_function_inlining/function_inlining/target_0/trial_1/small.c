#include <stdint.h>
#include <stdio.h>

int v;
int w = 0xDC6F3D13L;
int ak;
int ap;

int main() {
  int au_0;
  for (ak = 0;;) {
    for (int ah = 0; ah <= 3; ah += 1) {
      au_0 = (ap && 1 ? ap : ap % 1) + ak && 0x57;
      if (w) {
        v = 0x41AEA787L;
        (void)au_0;
      } else {
        (void)au_0;
      }
    }
  }
  printf("checksum = %d\n", v);
  return 0;
}