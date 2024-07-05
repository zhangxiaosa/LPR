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
long long ag[4];
short ah;
long long ak;
char an;
unsigned ao;
unsigned ap;

short au_decomposed[5][2][10];
short au_i, au_j, au_k;

int main() {
  ak = 0;
  for (ah = 0; ah <= 3; ah += 1) {
    au_i = 4;
    au_j = 1;
    au_k = 5;
    au_decomposed[au_i][au_j][au_k] = ~fn4(fn2(ap, 1L) != 0, an) + ak && 0x57L;
    if (w >= (fn7(4UL, au_decomposed[au_i][au_j][au_k]) > 2)) {
      v = 0x41AEA787L;
      ag[3] = au_decomposed[au_i][au_j][au_k];
    } else {
      ao = au_decomposed[au_i][au_j][au_k];
    }
  }
  
  q = v;
  printf("checksum = %X\n", q);
  return 0;
}