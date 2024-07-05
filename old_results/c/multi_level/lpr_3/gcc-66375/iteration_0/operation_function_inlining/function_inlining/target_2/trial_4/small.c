#include <stdio.h>

char fn2(char p1, int p2) { return p1; }

short fn3(short p1, short p2) { return p2; }

unsigned fn4(unsigned p1, unsigned p2) { return p1 + p2; }

unsigned p;

void fn5(char p1) { p = p1; }

void fn6(char p1) { fn5(p1); }

void fn7(unsigned p1, char *p2, int p3) { fn6(p1); }

unsigned t;

unsigned u;

unsigned v[1][4];

unsigned fn8(char, int);

unsigned fn9(unsigned, unsigned, int, unsigned, int);

int fn10(int, unsigned, unsigned, int);

int main() {
  int i;
  int f = 0;

  {
    char fn2;
    {
      int fn4;
      {
        unsigned fn8;
        {
          int fn2;
          {
            unsigned fn4;
            unsigned e;
            {
              int i;
              for (i = 0; i < 9; i++)
                e = 0x9EE7F9D1C772505BLL;
              fn4 = fn2 = v[0][3] = 3;
            }
          }
          u = 18446744073709551613UL;
          {
            int i;
            unsigned e;
            for (i = 0; i < 9; i++)
              e = 0x9EE7F9D1C772505BLL;
            fn2 = fn4 = fn4(u, e);
          }
        }
      }
    }
    {
      int b;
      {
        unsigned c;
        {
          int i;
          unsigned e;
          for (i = 0; i < 9; i++)
            e = 0x9EE7F9D1C772505BLL;
          b = 0L;
          {
            int i;
            unsigned e;
            for (i = 0; i < 9; i++)
              e = 0x9EE7F9D1C772505BLL;
            b = 0L;
            {
              int i;
              unsigned e;
              for (i = 0; i < 9; i++)
                e = 0x9EE7F9D1C772505BLL;
              b = 0L;
              {
                int j;
                for (j = 0; j < 4; j++)
                  fn7(v[0][j], "g_1729[i][j]", f);
              }
            }
          }
        }
      }
      return b;
    }
  }

  printf("checksum = %%X\n", p);
  return 0;
}