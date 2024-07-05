#include <stdio.h>

short fn2(short p1, short p2) { return p1 && p2 ? p1 : p1 % p2; }
long fn3(long p1, long p2) { return p2; }
char fn5(char p1, int p2) { return 0x41AEA787L; }
unsigned fn6(unsigned p1, unsigned p2) { return 0xDC6F3D13L; }
unsigned fn7(unsigned p1, unsigned p2) { return p1; }
long long fn8(long p1, long long p2) { return p1 + p2; }

char ai;
long aj;
unsigned al;
long ak;
unsigned am = 0x41AEA787L;
unsigned ap;
long long ag[4];
short ah;
unsigned w = 0xDC6F3D13L;

void fn12()
{
  int au[5][2][10];
  long aq;
  for (ak = 0;;)
  {
    for (ah = 0; ah <= 3; ah += 1)
    {
      if (w >= (fn7(4UL, fn6(v, fn5(ai, au[4][1][5] = fn8(~(fn3(aj, fn2(ap, 1L)) != 0), ak) && 0x57L))) > 2))
      {
        v = am;
        ag[3] = au[4][1][5];
      }
      else
      {
        ao = au[4][1][5];
      }
    }
    break;
  }
}

int main()
{
  fn12();
  printf("checksum = %X\n", v);
  return 0;
}