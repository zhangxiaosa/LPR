#include <stdio.h>

unsigned i;

unsigned fn3(int* p1, int* l_ptr) {
  short m = 0x809C;
  if (i)
    printf("l_1179=%lld\n", (long long)*l_ptr);
  unsigned o = 0xE576516E;
  if (i)
    printf("l_1179=%lld\n", (long long)*l_ptr);
  *p1 = 0x60781BCD >= m ^ 4294967287UL - o;
  return *p1;
}

int main() {
  int p1 = 1;
  int l;
  if (fn3(&p1, &l))
    ;
}