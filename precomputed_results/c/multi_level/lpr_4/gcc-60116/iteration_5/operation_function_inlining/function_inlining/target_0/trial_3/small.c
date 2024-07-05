#include <stdio.h>

int v;
int w = 0xDC6F3D13L;
long long ag[4];
int ah;
long ak;
int ap;

int main() {
  for (ak = 0;;) {
    ak += (~(ap && 1 ? ap : ap % 1)) && 0x57;
    ag[3] = ak + (~(ap && 1 ? ap : ap % 1)) && 0x57;

    if (w) {
      v = 0x41AEA787L;
      ag[3] = ak + (~(ap && 1 ? ap : ap % 1)) && 0x57;
    } else {
      ag[3] = ak + (~(ap && 1 ? ap : ap % 1)) && 0x57;
    }
  }

  printf("checksum = %d\n", v);
  return 0;
}