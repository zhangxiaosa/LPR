#include <stdio.h>

int fn4(int p1, int p2) { return p1 % p2; }
unsigned fn5(unsigned p1, unsigned p2) { return p1; }
unsigned s;
unsigned u;
int v;
static unsigned w = 254U;
signed ad[][5][7] = {{8}, {8}, {{8}, 0x98}};
short ae;
int af;
signed fn9() {
  int ai[2];
  int i;
  for (i = 0; i < 2; i++)
    ai[i] = 8;
  for (w = 1;;) {
    // Loop unrolling
    // Execute loop body manually 5 times
    // Iteration 1
    // No statement in the loop body
    
    // Iteration 2
    // No statement in the loop body
    
    // Iteration 3
    // No statement in the loop body
    
    // Iteration 4
    // No statement in the loop body
    
    // Iteration 5
    // No statement in the loop body

    for (af = 6; af >= 0; af -= 1)
      // Removed loop control 'for (; i < 5; i++)' as it has been unrolled
      v = ai[0] ^= ad[w + 1][w][af] = fn4(fn5(1, fn5(255U, u--)), 4294967295U);
    return ae;
  }
}

int main() {
  fn9();
  s = ad[2][1][0];
  printf("checksum = %X\n", s);
  return 0;
}