#include <stdio.h>

typedef signed a;
typedef short b;
typedef int c;
typedef unsigned d;
typedef unsigned e;
typedef unsigned f;

void fn1(f p1, int p2) {
  printf("checksum = %X\n", p1);
}

a fn2(a p1, a p2) {
  return p1;
}

b fn3(b p1, b p2) {
  return p1;
}

c fn4(c p1, c p2) {
  return p1 % p2;
}

d fn5(d p1, d p2) {
  return p1;
}

f s;
d u;
c v;
static d w = 254U;
a ad[7][5][7] = {{8}, {8}, {{8}, 0x98}};
b ae;
c af;

int main() {
  e ah = 3U;
  c ai[2];
  int i, j, k;
  int aj = 0;

  // Inline function fn9
  {
    // Local variables of fn9
    e ah = 3U;
    c ai[2];
    int i;
    for (i = 0; i < 2; i++) {
      ai[i] = 8;
    }
    for (w = 1;;) {
      for (; i < 5; i++)
        ;
      for (af = 6; af >= 0; af -= 1) {
        v = ai[0] ^= ad[w + 1][w][af] = ai[0] ^ ad[w + 1][w][af] % 4294967295U;
      }
      return ae;
    }
  }

  // Calculation of s using nested loops
  for (i = 0; i < 7; i++) {
    for (j = 0; j < 5; j++) {
      for (k = 0; k < 7; k++) {
        s = s ^ ad[i][j][k];
      }
    }
  }

  // Print the value of s as a checksum
  printf("checksum = %X\n", s);
  return 0;
}