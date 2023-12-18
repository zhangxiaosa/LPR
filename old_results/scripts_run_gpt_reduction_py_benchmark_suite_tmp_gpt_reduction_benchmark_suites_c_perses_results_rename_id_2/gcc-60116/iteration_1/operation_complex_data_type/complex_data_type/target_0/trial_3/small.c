#include <stdio.h>

char fn2(char p1, char p2) {
  return p1 && p2 ? p1 : p1 % p2;
}

char fn4(char p1, char p2) {
  return p1;
}

unsigned fn7(unsigned p1, unsigned p2) {
  return p1;
}

char q;
int v;
unsigned w = 0xDC6F3D13L;
long long ag0, ag1, ag2, ag3;
short ah;
long long ak;
char an;
unsigned ao;
unsigned ap;

int main() {
  short au00, au01, au02, au03, au04, au10, au11, au12, au13, au14, au20, au21, au22, au23, au24, au30, au31, au32, au33, au34, au40, au41, au42, au43, au44;
  ak = 0;
  
  for (ah = 0; ah <= 3; ah += 1) {
    au44 = ~fn4(fn2(ap, 1L) != 0, an) + ak && 0x57L;
    au[4][1][5] = au44;
    
    if (w >= (fn7(4UL, au44) > 2)) {
      v = 0x41AEA787L;
      ag3 = au44;
    } else {
      ao = au44;
    }
  }
  
  q = v;
  printf("checksum = %X\n", q);
  
  return 0;
}