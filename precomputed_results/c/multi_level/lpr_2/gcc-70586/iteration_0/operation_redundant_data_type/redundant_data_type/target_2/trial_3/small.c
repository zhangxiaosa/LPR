#include <stdio.h>

int fn2(int p1, int p2) { return p1 - p2; }
unsigned int i;
unsigned int fn3(unsigned int p1) {
  int l;
  short m = 0x809C;
  unsigned int o_0 = 0xE576516E;
  if (i)
    printf("l_1179=%lld\n", (long long)l);
  p1 = fn2(0x60781BCD >= m ^ 4294967287, o_0);
  if (i)
    printf("l_1179=%lld\n", (long long)l);
  return p1;
}

int main() {
  // TODO: Define and optimize the target variable 'c'
  if (fn3(1))
    ;
}