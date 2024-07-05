#include<stdio.h>

unsigned fn3(unsigned p1) {
  int l;
  short m = 0x809CL;
  if (p1)
    printf("l_1179=%lld\n", (long long)l);
  unsigned o = 0xE576516EL;
  if (p1)
    printf("l_1179=%lld\n", (long long)l);
  p1 = 0x60781BCDL >= m ^ 4294967287UL - o;
  return p1;
}

int main() {
  if (fn3(1))
    ;
}