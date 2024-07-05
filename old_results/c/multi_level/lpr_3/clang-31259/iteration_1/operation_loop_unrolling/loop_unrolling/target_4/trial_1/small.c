#include <stdio.h>

signed fn2(signed p1, signed p2) { return p1; }
int fn4(int p1, int p2) { return p1 % p2; }
unsigned fn5(unsigned p1, unsigned p2) { return p1; }

unsigned s;
unsigned u;
int v;
static unsigned w = 254U;
signed ad[7][5][7] = {{8}, {8}, {{8}, 0x98}};
short ae;
int af;

signed fn9() {
  int ai[2];
  int i;
  for (i = 0; i < 2; i++)
    ai[i] = 8;

  for (w = 1;;) {
    // Optimized unrolled loop for i = 0
    s = s ^ ad[0][0][0];
    s = s ^ ad[0][1][0];
    s = s ^ ad[0][2][0];
    s = s ^ ad[0][3][0];
    s = s ^ ad[0][4][0];

    // Optimized unrolled loop for i = 1
    s = s ^ ad[1][0][0];
    s = s ^ ad[1][1][0];
    s = s ^ ad[1][2][0];
    s = s ^ ad[1][3][0];
    s = s ^ ad[1][4][0];

    // Optimized unrolled loop for i = 2
    s = s ^ ad[2][0][0];
    s = s ^ ad[2][1][0];
    s = s ^ ad[2][2][0];
    s = s ^ ad[2][3][0];
    s = s ^ ad[2][4][0];

    // Optimized unrolled loop for i = 3
    s = s ^ ad[3][0][0];
    s = s ^ ad[3][1][0];
    s = s ^ ad[3][2][0];
    s = s ^ ad[3][3][0];
    s = s ^ ad[3][4][0];

    // Optimized unrolled loop for i = 4
    s = s ^ ad[4][0][0];
    s = s ^ ad[4][1][0];
    s = s ^ ad[4][2][0];
    s = s ^ ad[4][3][0];
    s = s ^ ad[4][4][0];

    // Optimized unrolled loop for i = 5
    s = s ^ ad[5][0][0];
    s = s ^ ad[5][1][0];
    s = s ^ ad[5][2][0];
    s = s ^ ad[5][3][0];
    s = s ^ ad[5][4][0];

    // Optimized unrolled loop for i = 6
    s = s ^ ad[6][0][0];
    s = s ^ ad[6][1][0];
    s = s ^ ad[6][2][0];
    s = s ^ ad[6][3][0];
    s = s ^ ad[6][4][0];

    return ae;
  }
}

int main() {
  int j;
  fn9();
  
  printf("checksum = %X\n", s);
  return 0;
}