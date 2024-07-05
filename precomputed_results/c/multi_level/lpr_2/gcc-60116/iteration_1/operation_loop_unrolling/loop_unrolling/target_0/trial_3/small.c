#include <stdio.h>

char fn2(char p1, char p2) { return p1 && p2 ? p1 : p1 % p2; }
char fn4(char p1, char p2) { return p1; }
unsigned fn7(unsigned p1, unsigned p2) { return p1; }

char q;
int v;
unsigned w = 0xDC6F3D13L;
long long ag[4];
short ah;
long long ak;
char an;
unsigned ao;
unsigned ap;

int main() {
  short au[5][2][10];
  
  for (ak = 0;;) {
    if (w >= (fn7(4UL, au[4][1][5] = ~fn4(fn2(ap, 1L) != 0, an) + ak && 0x57L) > 2)) {
      v = 0x41AEA787L;
      ag[3] = au[4][1][5];
    } else {
      ao = au[4][1][5];
    }
  
    ah = 0; // 1st iteration
    if (w >= (fn7(4UL, au[4][1][5] = ~fn4(fn2(ap, 1L) != 0, an) + ak && 0x57L) > 2)) {
      v = 0x41AEA787L;
      ag[3] = au[4][1][5];
    } else {
      ao = au[4][1][5];
    }
  
    ah = 1; // 2nd iteration
    if (w >= (fn7(4UL, au[4][1][5] = ~fn4(fn2(ap, 1L) != 0, an) + ak && 0x57L) > 2)) {
      v = 0x41AEA787L;
      ag[3] = au[4][1][5];
    } else {
      ao = au[4][1][5];
    }
  
    ah = 2; // 3rd iteration
    if (w >= (fn7(4UL, au[4][1][5] = ~fn4(fn2(ap, 1L) != 0, an) + ak && 0x57L) > 2)) {
      v = 0x41AEA787L;
      ag[3] = au[4][1][5];
    } else {
      ao = au[4][1][5];
    }
  
    ah = 3; // 4th iteration
    if (w >= (fn7(4UL, au[4][1][5] = ~fn4(fn2(ap, 1L) != 0, an) + ak && 0x57L) > 2)) {
      v = 0x41AEA787L;
      ag[3] = au[4][1][5];
    } else {
      ao = au[4][1][5];
    }
  
    break;
  }
  
  q = v;
  printf("checksum = %X\n", q);
  return 0;
}