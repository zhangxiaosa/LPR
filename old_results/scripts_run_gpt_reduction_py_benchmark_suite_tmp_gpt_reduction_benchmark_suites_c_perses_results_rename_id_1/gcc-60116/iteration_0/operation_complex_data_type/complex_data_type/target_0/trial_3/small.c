#include <stdio.h>

short fn2(short p1, short p2) { return p1 && p2 ? p1 : p1 % p2; }

long fn3(long p1, long p2) { return p2; }

char fn5(char p1, int p2) { return p2; }

unsigned fn6(unsigned p1, unsigned p2) { return p2; }

unsigned fn7(unsigned p1, unsigned p2) { return p1; }

long long fn8(long p1, long long p2) { return p1 + p2; }

unsigned f;
int v;
unsigned w = 0xDC6F3D13L;

long long ag[4];
long long ag0;
long long ag1;
long long ag2;
long long ag3;

short ah;
char ai;
long aj;
long ak;
unsigned al;
int am = 0x41AEA787L;
int ao;
unsigned ap;
int aq;

struct fn12_result {
  unsigned ag0;
  unsigned ag1;
  unsigned ag2;
  unsigned ag3;
};

struct fn12_result fn12()
{
  char as = 4UL;
  short at = 1L;
  int au[5][2][10];
  for (ak = 0;;)
  {
    for (ah = 0; ah <= 3; ah += 1)
    {
      if (w >= (fn7(as, fn6(aq, fn5(ai, au[4][1][5] = fn8(~(fn3(aj, fn2(ap, at)) != 0), ak) && 0x57L))) > 2)
      {
        v = am;
        ag3 = au[4][1][5];
      }
      else
      {
        ao = au[4][1][5];
      }
    }
    struct fn12_result result;
    result.ag0 = ag0;
    result.ag1 = ag1;
    result.ag2 = ag2;
    result.ag3 = ag3;
    return result;
  }
}

int main()
{
  struct fn12_result fn12_result = fn12();
  ag[0] = fn12_result.ag0;
  ag[1] = fn12_result.ag1;
  ag[2] = fn12_result.ag2;
  ag[3] = fn12_result.ag3;

  f = v;
  printf("checksum = %X\n", f);
  return 0;
}