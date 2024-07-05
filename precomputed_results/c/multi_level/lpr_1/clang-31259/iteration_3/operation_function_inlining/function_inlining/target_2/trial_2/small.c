int main() {
  int ai[2];
  int v;
  static unsigned w = 254U;
  unsigned u;
  signed ad_dim1[][5][7] = {{8}, {8}, {{8}, 0x98}};
  int af;

  for (int j = 0; j < 2; j++)
    ai[j] = 8;

  for (; j < 4; j++) {}

  for (af = 6; af >= 0; af -= 1)
    v = ai[0] ^= ad_dim1[255][w][af] = u-- % 1;

  printf("checksum = %x\n", ad_dim1[2][1][0]);
  return 0;
}