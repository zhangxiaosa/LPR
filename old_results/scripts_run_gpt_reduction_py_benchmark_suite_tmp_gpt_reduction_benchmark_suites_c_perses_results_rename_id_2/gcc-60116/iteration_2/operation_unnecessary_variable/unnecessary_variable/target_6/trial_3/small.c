#include <stdio.h>

char fn2(char p1, char p2) { return p1 && p2 ? p1 : p1 % p2; }

char q;
long long ag[4];
short ah;
long long ak;
unsigned ap;

int main() {
  ak = 0;

  for (ah = 0; ah <= 3; ah += 1) {
    unsigned assigned_value = ~(fn2(ap, 1L) != 0) + ak && 0x57L;
    q = 0x41AEA787L;
    ag[3] = assigned_value;
  }

  printf("checksum = %X\n", q);
  return 0;
}