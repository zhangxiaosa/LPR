#include <stdio.h>

short fn3(short p1, short p2) { return 1; }

int fn4(int p1, int p2) { return 1 % p2; }

int s;
int u;
int v;
static int w = 254;
signed ad[7][5][7] = {{8}, {8}, {{8}, 0x98}};
short ae;
int af;

int fn9() {
  int ai[2];
  int i;
  for (i = 0; i < 2; i++)
    ai[i] = 8;
  for (w = 1;;) {
    for (; i < 5; i += 2)
      ;
    for (af = 6; af >= 0; af -= 1)
      v = ai[0] ^= ad[w + 1][w][af] = fn4(fn3(1, u--), 4294967295);
    return ae;
  }
}

int main() {
  int i, j, k;
  fn9();

  // Unrolled loop (first iteration)
  k = 0;
  s = s ^ ad[0][0][0];
  k = 1;
  s = s ^ ad[0][0][1];
  k = 2;
  s = s ^ ad[0][0][2];
  k = 3;
  s = s ^ ad[0][0][3];
  k = 4;
  s = s ^ ad[0][0][4];
  k = 5;
  s = s ^ ad[0][0][5];
  k = 6;
  s = s ^ ad[0][0][6];
  
  // Unrolled loop (second iteration)
  k = 0;
  s = s ^ ad[2][0][0];
  k = 1;
  s = s ^ ad[2][0][1];
  k = 2;
  s = s ^ ad[2][0][2];
  k = 3;
  s = s ^ ad[2][0][3];
  k = 4;
  s = s ^ ad[2][0][4];
  k = 5;
  s = s ^ ad[2][0][5];
  k = 6;
  s = s ^ ad[2][0][6];

  printf("s_unrolled_iter_1 = %X\n", s);
  printf("s_unrolled_iter_2 = %X\n", s);

  return 0;
}