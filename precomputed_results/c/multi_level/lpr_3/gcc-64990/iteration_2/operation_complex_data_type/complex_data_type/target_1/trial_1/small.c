#include <stdio.h>

short g = 0x7EBA;
int h = 0xCA;
short i;
int j_new[5][5];
unsigned k = 0xAF7C65D6L;
static unsigned l;
unsigned m[9][2][3];

unsigned fn1(int p1, int p2)
{
  p2 = 7;
  return 2;
}

int fn2(int p1)
{
  unsigned v[6][3][2];
  for (i = 0;;)
  {
    if (k != 0)
      break;
    return v[g][l + 1][l];
  }
  if (h != 0)
  {
    // Do nothing
  }
  else
    return j_new[g][g];
  for (; p1 != 0;)
  {
    // Empty loop
  }
  return 0x709BFC8A;
}

unsigned fn3()
{
  fn1(fn2(0), 7);
  return 0;
}

int main()
{
  fn3();
  return 0;
}