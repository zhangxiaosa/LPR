#include <stdio.h>

typedef signed signed;
typedef int int;
typedef unsigned unsigned;

signed fn2(signed p1, signed p2) {
  return p1;
}

int fn4(int p1, int p2) {
  return p1 % p2;
}

unsigned s;
unsigned u;
int v;
static unsigned w = 254U;
signed ad[][5][7] = {{8}, {8}, {{8}, 0x98}};
int af;

void fn9() {
  unsigned ah = 3U;
  int ai[2];
  int w;
  
  for (w = 0; w < 25; w++) {
    ai[w] = 8;
  }
  
  for (w = 1;;) {
    int af;
    
    for (af = 6; af >= 0; af -= 1) {
      v = ai[0] ^= ad[w + 1][w][af] = fn4(fn2(1, fn2(ah, u--)), 4294967295U);
    }
    
    return;
  }
}

int main() {
  int i, j, k;
  fn9();
  
  for (j = 0; j < 5; j++) {
    for (k = 0; k < 7; k++) {
      s = s ^ ad[2][j][k];
    }
  }
  
  printf("checksum = %X\n", s);
  return 0;
}