int main() {
  int ai[2];
  int w = 254;
  int u;
  int v;
  static int ad1[][5][7] = {
    {{8}, {8}, {{8}, 0x98}}
  };
  int af;

  ai[0] = 8;
  ai[1] = 8;

  u = 0;
  
  // Unrolled loop 1
  v = ai[0] ^= ad1[w + 1][w][6] = (1 % 4294967295);
  v = ai[0] ^= ad1[w + 1][w][5] = (1 % 4294967295);
  v = ai[0] ^= ad1[w + 1][w][4] = (1 % 4294967295);
  v = ai[0] ^= ad1[w + 1][w][3] = (1 % 4294967295);
  v = ai[0] ^= ad1[w + 1][w][2] = (1 % 4294967295);
  v = ai[0] ^= ad1[w + 1][w][1] = (1 % 4294967295);
  v = ai[0] ^= ad1[w + 1][w][0] = (1 % 4294967295);

  int s;
  s = ad1[2][1][0];
  printf("s_unrolled_iter_1 = %X\n", s);

  return 0;
}