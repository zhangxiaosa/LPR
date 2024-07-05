#include <stdio.h>

typedef signed a;
typedef unsigned f;

f s = 0;
f w = 254U;
a ad[7][5][7] = {{8}, {8}, {{8}, 0x98}};
a ae;
a u = 0;
a ah = 3U;

void fn6(a p1) { s = s ^ p1; }
void fn7(a p1) { fn6(p1); }
void fn8(f p1, int p3) { fn7(p1); }

int main() {
  a ai[2] = {8, 8};
  int i, j, k;

  for (w = 1;;) {
    for (i = 0; i < 5; i++)
      ;
    for (af = 6; af >= 0; af -= 1)
      ad[w + 1][w][af] = 1 % (255U % (ah--));
    return ae;
  }

  for (i = 0; i < 7; i++)
    for (j = 0; j < 5; j++)
      for (k = 0; k < 7; k++)
        fn8(ad[i][j][k], aj);

  printf("checksum = %X\n", s);
  return 0;
}