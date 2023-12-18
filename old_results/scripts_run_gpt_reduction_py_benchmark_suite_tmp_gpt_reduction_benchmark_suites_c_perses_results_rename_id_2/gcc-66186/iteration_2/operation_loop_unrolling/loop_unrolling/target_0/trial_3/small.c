#include <iostream>

int h;

int main()
{
  short ak[8];
  unsigned p2;
  unsigned short p3 = -7L;
  unsigned p4;

  // Unrolled iteration 1
  for (p4 = 0; p4 <= 7; p4 += 1)
  {
    if (h < 0)
    {
      for (p4 = 0; p4 <= 7; p4 += 1)
      {
        if (ak[p3])
        {
          break;
        }
      }
    }
  }

  // Unrolled iteration 2
  for (p4 = 0; p4 <= 7; p4 += 1)
  {
    if (h < 0)
    {
      for (p4 = 0; p4 <= 7; p4 += 1)
      {
        if (ak[p3])
        {
          break;
        }
      }
    }
  }
}