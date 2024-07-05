#include <stdio.h>

void fn1(unsigned p1) {
  printf("checksum = %X\n", p1);
}

signed fn2(signed p1, signed p2) {
  return p1;
}

short fn3(short p1, short p2) {
  return p1;
}

int fn4(int p1, int p2) {
  return p1 % p2;
}

unsigned fn5(unsigned p1, unsigned p2) {
  return p1;
}

unsigned s;
unsigned u;
int v;
static unsigned w = 254U;
signed ad[7][5][7] = {{8}, {8}, {{8}, 0x98}};
int af;

signed fn9() {
  unsigned ah = 3U;
  int ai[2];
  int i;

  for (i = 0; i < 2; i++)
    ai[i] = 8;

  for (w = 1;;) {
    for (; i < 5; i++)
      ;

    for (af = 6; af >= 0; af -= 1) {
      v = ai[0] ^=
          ad[w + 1][w][af] = (1 % ((255U) % (ah)));

      u--;

      if (u < 0)
        break;
    }

    if (u < 0)
      break;
  }

  return 0;
}

int main() {
  int i, j, k;

  unsigned ah = 3U;
  int ai[2];
  ai[0] = 8;
  ai[1] = 8;

  for (w = 1;;) {
    for (i = 0; i < 2; i++)
      ;

    for (af = 6; af >= 0; af -= 1) {
      v = ai[0] ^=
          ad[w + 1][w][af] = (1 % ((255U) % (ah)));

      u--;

      if (u < 0)
        break;
    }

    if (u < 0)
      break;
  }

  for (i = 0; i < 7; i++) {
    for (j = 0; j < 5; j++) {
      for (k = 0; k < 7; k++) {
        s = s ^ ad[i][j][k];
      }
    }
  }

  printf("checksum = %X\n", s);

  return 0;
}