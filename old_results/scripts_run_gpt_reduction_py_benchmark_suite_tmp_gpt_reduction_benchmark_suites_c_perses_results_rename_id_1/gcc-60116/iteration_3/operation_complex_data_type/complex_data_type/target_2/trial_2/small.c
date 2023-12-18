#include <stdio.h>

unsigned f = 0;
unsigned w = 0xDC6F3D13L;

long long ag_3;

int ah = 0;
int ai = 0;
long ak = 0;
int am = 0x41AEA787L;
int ao = 0;
unsigned ap = 0;
int aq = 0;

int fn12() {
  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1) {
      if (w >= 0x57L) {
        f = am;
        ag_3 = 0; // ag_3 is not used
      } else {
        ao = 0; // ao is not used
      }
    }
  }
  return f;
}

int main() {
  fn12();
  printf("checksum = %X\n", f);
  return 0;
}