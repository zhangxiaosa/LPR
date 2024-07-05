typedef signed a;
typedef short b;
typedef int c;
typedef unsigned d;
typedef unsigned e;
typedef unsigned f;
a fn2(a p1, a p2) { return p1; }
b fn3(b p1, b p2) { return p1; }
c fn4(c p1, c p2) { return p1 % p2; }
d fn5(d p1, d p2) { return p1; }
f s;
d u;
c v;
static d w = 254U;
a ad[7][5][7] = {{8}, {8}, {{8}, 0x98}};
b ae;
c af;
a fn9() {
  e ah = 3U;
  c ai[2];
  int i;
  for (i = 0; i < 2; i++)
    ai[i] = 8;
  for (w = 1;;) {
    i = 0;
    // Original loop body code
    i = 1;
    // Original loop body code
    for (; i < 5 - 4; i++) {
      // Original loop body code
    }
    for (; i < 5; i++) {
      // Original loop body code
    }
    for (af = 6; af >= 0; af -= 1)
      v = ai[0] ^= ad[w + 1][w][af] =
          fn4(fn3(1, fn5(255U, fn2(ah, u--))), 4294967295U);
    return ae;
  }
}
int main() {
  int i, j, k;
  fn9();
  for (i = 0; i < 7; i++) {
    // Unrolled iteration 1
    s = s ^ ad[i][0][0];
    s = s ^ ad[i][1][0];
    s = s ^ ad[i][2][0];
    s = s ^ ad[i][3][0];
    s = s ^ ad[i][4][0];

    // Unrolled iteration 2
    s = s ^ ad[i][0][1];
    s = s ^ ad[i][1][1];
    s = s ^ ad[i][2][1];
    s = s ^ ad[i][3][1];
    s = s ^ ad[i][4][1];

    // Unrolled iteration 3
    s = s ^ ad[i][0][2];
    s = s ^ ad[i][1][2];
    s = s ^ ad[i][2][2];
    s = s ^ ad[i][3][2];
    s = s ^ ad[i][4][2];

    // Unrolled iteration 4
    s = s ^ ad[i][0][3];
    s = s ^ ad[i][1][3];
    s = s ^ ad[i][2][3];
    s = s ^ ad[i][3][3];
    s = s ^ ad[i][4][3];

    // Unrolled iteration 5
    s = s ^ ad[i][0][4];
    s = s ^ ad[i][1][4];
    s = s ^ ad[i][2][4];
    s = s ^ ad[i][3][4];
    s = s ^ ad[i][4][4];
  }
  printf("checksum = %X\n", s);
  return 0;
}