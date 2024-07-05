#include<stdio.h>

unsigned fn2(signed p1, signed p2) {
  return p1;
}

int fn4(int p1, int p2) {
  return p1 % p2;
}

unsigned f;
unsigned u;
int v;
static unsigned w = 254U;
signed ad[7][5][7] = {{8}, {8}, {{8}, 0x98}};
int ae;
int af;

signed fn9() {
  int ai[2];
  int i;
  for (i = 0; i < 2; i++)
    ai[i] = 8;
  
  for (w = 1;;) {
    // Unrolled loop iteration 1: i = 0
    {
      i = 0;
      for (; i < 5; i++) {
      }

      for (af = 6; af >= 0; af -= 1)
        v = ai[0] ^= ad[w + 1][w][af] = fn4(fn2(1, fn2(3, u--)), 4294967295);
    }

    // Unrolled loop iteration 2: i = 1
    {
      i = 1;
      for (; i < 5; i++) {
      }

      for (af = 6; af >= 0; af -= 1)
        v = ai[0] ^= ad[w + 1][w][af] = fn4(fn2(1, fn2(3, u--)), 4294967295);
    }

    return ae;
  }
}

int main() {
  int i;
  fn9();

  // Optimized loop unrolling: i += 2
  for (i = 0; i < 6; i += 2) {
    // Unrolled loop iteration 1: i
    f = f ^ ad[i][1][0];

    // Unrolled loop iteration 2: i+1
    f = f ^ ad[i+1][1][0];
  }

  // Handle the last iteration separately
  f = f ^ ad[6][1][0];
  
  printf("checksum = %x\n", f);
  return 0;
}