#include <stdio.h>

unsigned u;
int v;
unsigned w = 254U;
unsigned ae;
int af;
unsigned s;

unsigned fn2(unsigned p1, unsigned p2) { return p1; }
unsigned fn5(unsigned p1, unsigned p2) { return p1; }

void fn6(unsigned p1) { s = s ^ p1; }
void fn7(unsigned p1) { fn6(p1); }
void fn8(unsigned p1, char *p2, int p3) { fn7(p1); }

unsigned ad[7][5][7] = { { { { 8 }, 0, 0, 0, 0, 0, 0 }, 0, 0, 0, 0 }, { { { 8 }, 0, 0, 0, 0, 0, 0 }, 0, 0, 0, 0 }, { { { 8 }, 0, 0, 0, 0, 0, 0 }, 0, 0, 0, 0 } };

unsigned fn9() {
  for (w = 1;;) {
    for (; w < 5; w++)
      ;
    for (af = 6; af >= 0; af -= 1)
      v = (8 ^ ad[w + 1][w][af]) % 4294967295U;
    return ae;
  }
}

int main() {
  fn9();
  for (int i = 0; i < 7; i++)
    for (int j = 0; j < 5; j++)
      for (int k = 0; k < 7; k++)
        fn8(ad[i][j][k], "g_643[i][j][k]", 0);
  printf("checksum = %X\n", s);
  return 0;
}