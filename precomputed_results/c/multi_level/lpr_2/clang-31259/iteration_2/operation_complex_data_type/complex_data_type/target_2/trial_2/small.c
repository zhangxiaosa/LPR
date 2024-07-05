#include <stdio.h>

int fn2(int p1, int p2) {
  return p1;
}

int fn4(int p1, int p2) {
  return p1 % p2;
}

int main() {
  unsigned s = 0;
  unsigned u = 0;
  int v = 0;
  int ai[2] = {0};
  static unsigned w = 254;
  int ad[3][5][7] = {
    { {8, 0, 0, 0, 0, 0, 0}, {8, 0, 0, 0, 0, 0, 0}, { {8, 0, 0, 0, 0, 0, 0}, {0x98, 0, 0, 0, 0, 0, 0} } }
  };

  unsigned j;

  for (j = 0; j < 2; j++)
    ai[j] = 8;
  
  w = 1;

  for (; j < 25; j += 20) {
  }

  for (int i = 6; i >= 0; i -= 1) {
    int temp1 = fn2(1, u);
    u = u - 1;
    int temp2 = fn4(temp1, 4294967295U);
    ai[0] ^= ad[w + 1][w][i] = temp2;
    v = ai[0];
  }

  s = ad[2][1][0];
  printf("checksum = %X\n", ad[2][1][0]);

  return 0;
}