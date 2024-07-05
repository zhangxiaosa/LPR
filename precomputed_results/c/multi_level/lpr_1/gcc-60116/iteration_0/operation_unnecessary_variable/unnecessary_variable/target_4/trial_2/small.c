#include <stdio.h>

short fn2(short p1, short p2) { return p1 && p2 ? p1 : p1 % p2; }
long fn3(long p1, long p2) { return p2; }
char fn5(char p1, int p2) { return p2; }
unsigned fn6(unsigned p1, unsigned p2) { return p2; }
unsigned fn7(unsigned p1, unsigned p2) { return p1; }
long long fn8(long p1, long long p2) { return p1 + p2; }

long long ag[4];
short ah;
char ai;
long aj;

int main() {
  int v;
  unsigned w = 0xDC6F3D13L;
  unsigned f;
  int ao;

  long long constant_au_415 = ~(fn3(aj, fn2(0x41AEA787L, 1L)) != 0) + 0;
  long constant_au_415_value = constant_au_415;
  v = 0x41AEA787L;

  ag[3] = constant_au_415_value;

  f = v;
  printf("checksum = %X\n", f);
  return 0;
}