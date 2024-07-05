#include <stdio.h>

unsigned fn2(signed p1, signed p2) { return p1; }

int fn4(int p1, int p2) { return p1 % p2; }

unsigned f;
unsigned u;
int v;
static unsigned w = 254U;
signed ad[7][5][7] = {{8}, {8}, {{8}, 0x98}};
int ae;
int af;

signed fn9() {
  int ai[2];
  int j;
  for (j = 0; j < 2; j++)
    ai[j] = 8;
  
  w = 1;
  for (j = 0; j < 7; j++) {
    // Unrolled loop iterations
    af = 6;
    v = ai[0] ^= ad[w + 1][w][af] = fn4(fn2(1, fn2(3, u--)), 4294967295);
    
    af = 5;
    v = ai[0] ^= ad[w + 1][w][af] = fn4(fn2(1, fn2(3, u--)), 4294967295);
    
    af = 4;
    v = ai[0] ^= ad[w + 1][w][af] = fn4(fn2(1, fn2(3, u--)), 4294967295);
    
    af = 3;
    v = ai[0] ^= ad[w + 1][w][af] = fn4(fn2(1, fn2(3, u--)), 4294967295);
    
    af = 2;
    v = ai[0] ^= ad[w + 1][w][af] = fn4(fn2(1, fn2(3, u--)), 4294967295);
    
    af = 1;
    v = ai[0] ^= ad[w + 1][w][af] = fn4(fn2(1, fn2(3, u--)), 4294967295);
    
    af = 0;
    v = ai[0] ^= ad[w + 1][w][af] = fn4(fn2(1, fn2(3, u--)), 4294967295);
    
    // Update w for the next unrolled iteration
    w++;
  }
  
  return ae;
}

int main() {
  int j;
  fn9();
  for (j = 0; j < 3; j++)
    f = f ^ ad[2 * j][1][0];
  printf("checksum = %x\n", f);
  return 0;
}