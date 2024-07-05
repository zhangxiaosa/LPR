#include <stdio.h>

void fn1(unsigned p1, int p2) { printf("checksum = %X\n", p1); }

short fn2(short p1, short p2) { return p1 && p2 ? p1 : p1 % p2; }

long fn3(long p1, long p2) { return p2; }

char fn4(char p1, char p2) { return p1; }

char fn5(char p1, int p2) { return p2; }

unsigned fn6(unsigned p1, unsigned p2) { return p2; }

unsigned fn7(unsigned p1, unsigned p2) { return p1; }

long long fn8(long p1, long long p2) { return p1 + p2; }

unsigned q;

void fn9(p1) { q = p1; }

void fn10(p1) { fn9(p1); }

long fn12() {
  char as = 4UL;
  short at = 1L;
  int au[5][2][10];

  for (aj = 0;;) {
    for (ai = 0; ai <= 3; ai += 1)
      if (w >=
          (fn7(as, fn6(aq, fn5(ai, au[4][1][5] = fn8(~fn4(fn3(ak, fn2(ap, at)) != 0, an), aj) && 0x57L))) > 2)) {
        v = am;
        ag[3] = au[4][1][5];
      } else
        ao = au[4][1][5];
    return al;
  }
}

int main() {
  int av = 0;
  fn12();
  {
    long p1 = v;
    char *p2 = "g_3";
    int p3 = av;
    fn10(p1);
  }
  {
    unsigned p1 = q;
    int p2 = av;
    fn1(p1, p2);
  }
  return 0;
}